class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> u(n+1);
        
        for(int i = 0; i<=n; i++){
            u[i] = __builtin_popcount(i);
        }

        return u;
    }
};
