class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> fin;

        for(int i = 0; i<nums.size(); i++){
            int tmp = target - nums[i];
            if(fin.find(tmp) != fin.end()){
                return {fin[tmp], i};
            } 
            fin.insert({nums[i], i});
        }

        return {};






    }
};
