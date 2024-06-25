class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string r = "";
        for(int i = 0; i < nums.size(); i++){
            if(nums[i][i] == '1') r += '0';
            else r += '1';
        }
        return r;
    }
};