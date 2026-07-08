class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), 
        [&] (char c) 
        {return tolower(c);}
        );
        erase(s, ' ');
        s.erase(remove_if(s.begin(), s.end(), [] (char c){ return !isalnum(c);}), s.end());


        int l = 0, r = s.size()-1;

        while(l<r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
