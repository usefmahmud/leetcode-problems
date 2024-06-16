class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0; i<arr.size(); i++){
            int m = -1;
            for(int j=i+1; j<arr.size(); j++){
                m = max(arr[j], m);
            }
            arr[i] = m;
        }
        return arr;
    }
};