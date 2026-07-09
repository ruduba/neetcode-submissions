class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int last = INT_MAX;
        int op = 0, p = 0;

        for(auto x: prices){
            if(x<last) last  = x;

            p = x - last;

            op = max(p, op);
        }

        return op;
    }
};
