class Solution {
public:
    void visit(unordered_map<int,int>& m, vector<vector<int>>& rooms, vector<int>& start){
        for(auto curr: start){
            if(!m[curr]){
                m[curr]++;
                visit(m, rooms, rooms[curr]);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,int> m{{0,1}};
        visit(m, rooms, rooms[0]);
        return m.size() == rooms.size();
    }
};