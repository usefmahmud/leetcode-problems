class Solution {
    
public:
    unordered_map<string, int> m;
    string r;
    void generate(int n, string g){
        if(n == 0){
            if(m.find(g) == m.end()){
                r = g;
            }
        }else{
            generate(n-1, g + "1");
            generate(n-1, g + "0");
        }
    }
    string findDifferentBinaryString(vector<string>& nums) {
        for(auto x: nums) ++m[x];
        generate(nums[0].size(), "");
        return r;
    }
};