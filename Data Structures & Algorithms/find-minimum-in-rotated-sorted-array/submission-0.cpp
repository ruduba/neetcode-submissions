class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = INT_MAX;
        for(auto x: nums){
            n = min(x, n);
        }

        return n;
        
    }
};
