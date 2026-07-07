class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(auto x: nums){
            if(s.insert(x).second == false)
                return true;
        }

        return false;
    }
};