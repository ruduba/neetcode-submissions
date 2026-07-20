class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0, r = 0;

        while(l<nums.size() && r<nums.size()){
            if(nums[l] == 0 && nums[r] != 0) swap(nums[l], nums[r]);

            if(nums[l] != 0) l++;
            r++;
        }

    }
};