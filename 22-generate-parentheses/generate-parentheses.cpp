class Solution {
public:
    void g(vector<string>& v, int o, int c, int n, string curr){
        if(curr.length()==n*2){
            v.push_back(curr);
        }else{
            if(o<n) g(v,o+1,c,n,curr+"(");
            if(c<o) g(v,o,c+1,n,curr+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> r;
        g(r,0,0,n,"");
        return r;
    }
};