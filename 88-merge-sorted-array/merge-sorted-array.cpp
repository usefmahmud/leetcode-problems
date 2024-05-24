class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> r;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                r.push_back(nums1[i]);
                i++;
            }else if(nums1[i] > nums2[j]){
                r.push_back(nums2[j]);
                j++;
            }else{
                r.push_back(nums1[i]);
                r.push_back(nums2[j]);
                i++,j++;
            }
        }
        for(;j<n;j++) r.push_back(nums2[j]);
        for(;i<m;i++) r.push_back(nums1[i]);

        nums1 = r;
    }
};