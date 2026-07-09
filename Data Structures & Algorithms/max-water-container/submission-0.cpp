class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxVol = INT_MIN;

        int l = 0, r = heights.size()-1;

        while(l<r){
            int vol = min(heights[l], heights[r]) * (r - l);

            maxVol = max(vol, maxVol);

            if(heights[l] < heights[r]) l++;
            else r--;
        }

        return maxVol;
    }
};
