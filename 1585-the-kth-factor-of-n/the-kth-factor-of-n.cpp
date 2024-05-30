class Solution {
public:
    int kthFactor(int n, int k) {
        // OPTIMAL SOLUTION WITH MORE SPACE
        set<int> st;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                st.insert(i);
                st.insert(n/i);
            }
        }
        vector<int> v(st.begin(), st.end());
        if(k <= v.size()){
            return v[--k];
        }
        return -1;
    }
};