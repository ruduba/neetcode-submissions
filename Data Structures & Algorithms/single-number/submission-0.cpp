class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int m = 0;

        for(auto x: nums){
            m ^= x;

        }

        return m;
        
    }
};
