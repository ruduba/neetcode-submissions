class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> fin;

        for(int i = 0; i<nums.size(); i++){
            fin[nums[i]] = i;
        }

        for(int i = 0; i<nums.size(); i++){
            int tmp = target - nums[i];
            if(fin.count(tmp) && fin[tmp] != i){
                return {i, fin[tmp]};
            } else {
                fin[nums[i]] == i;
            }
        }

        return {};






    }
};
