class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s1 = 0, s2 = 0;
        for(int i = 0; i<n; i++){
            s1 = s1 ^ nums[i];
            s2 = s2 ^ i;
        }

        s2 = s2 ^ n;

        return s1 ^ s2;
    }
};
