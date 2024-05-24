class Solution {
public:
    vector<int> center(int len){
        if(len%2 == 0){
            return {len/2-1, len/2};
        }else{
            return {len/2};
        }
    }
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        double r=0;
        if(a.size() == 0){
            vector<int> l = center((int)b.size());
            for(auto& x:l) r+=((double)b[x]/l.size());
        }else if(b.size() == 0){
            vector<int> l = center((int)a.size());
            for(auto& x:l) r+=((double)a[x]/l.size());
        }else{
            for(auto& x:b) a.push_back(x);
            sort(a.begin(),a.end());
            vector<int> l = center((int)a.size());
            for(auto& x:l) r+=((double)a[x]/l.size());
        }

        return r;
    }
};