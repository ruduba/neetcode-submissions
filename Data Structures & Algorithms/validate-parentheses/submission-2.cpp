class Solution {
public:
    bool isValid(string s) {

        if(s.size()%2 == 1) return false;

        list<char> stk;

        unordered_set<char> opn = {'(', '{', '['};


        for(int i = 0; i<s.size(); i++){
            if(opn.find(s[i]) != opn.end()){
                stk.push_back(s[i]);
            }
            else{
                if(stk.empty()) return false;
                else if((stk.back() == '(' && s[i] == ')') || 
                 (stk.back() == '{' && s[i] == '}') ||
                 (stk.back() == '[' && s[i] == ']')){
                    stk.pop_back();
                 }
                 else return false;
            }
        }
        if(stk.empty()) return true;

        return false;   
    }
};
