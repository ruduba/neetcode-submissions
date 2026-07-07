class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        for(auto x: nums){
            mp[x]++;
        }

        vector<int> kout;

        for(auto x: mp){
            kout.push_back(x.first);
        }

        sort(kout.begin(), kout.end(), [&](int a, int b){
            return(mp[a]>mp[b]);
        });


        kout.erase(kout.begin()+k, kout.end());

        return kout;
    }
};
