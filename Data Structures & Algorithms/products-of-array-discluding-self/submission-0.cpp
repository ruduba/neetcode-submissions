class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre = nums;
        vector<int> suf = nums;
        
        pre[0] = 1;
        suf[nums.size()-1] = 1;

        for(int i = 1; i<nums.size(); i++){
            pre[i] = nums[i-1] * pre[i-1];
        }

        for(int i = nums.size()-2; i>=0; i--){
            suf[i] = nums[i+1] * suf[i+1]; 
        }
        
        vector<int> res(nums.size());

        for(int i = 0; i<nums.size(); i++){
            res[i] = (pre[i] * suf[i]);
        }
        return res;
    }
};
