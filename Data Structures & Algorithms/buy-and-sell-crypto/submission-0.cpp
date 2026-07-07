class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lst  = INT_MAX;
        int op = 0, p = 0;

        for(auto x: prices){
            if(x<lst) lst = x;

            p = x - lst;
            op = max(op, p);
        }

        return op;
    }
};
