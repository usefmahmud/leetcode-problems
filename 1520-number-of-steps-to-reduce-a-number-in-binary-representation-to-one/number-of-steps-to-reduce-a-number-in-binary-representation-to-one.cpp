class Solution {
public:
    void divideTwo(string& s){
        s.pop_back();
    }
    void addOne(string& s){
        int foundZero = -1;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                foundZero = i;
            }
        }
        if(foundZero != -1){
            s[foundZero] = '1';
            for(int i=foundZero+1; i<s.length(); i++){
                s[i] = '0';
            }
        }else{
            for(auto& x:s) x='0';
            s = '1' + s;
        }
    }
    bool isEven(string s){
        return s.back() == '0';
    }
    int numSteps(string s) {
        int r=0;
        while(s != "1"){
            if(isEven(s)){
                divideTwo(s);
            }else{
                addOne(s);
            }
            r++;
        }   
        return r;
    }
};