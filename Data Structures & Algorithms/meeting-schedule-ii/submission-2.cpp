/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.empty()) return 0;

        vector<int> starts, ends;

        for(auto i : intervals){
            starts.push_back(i.start);
            ends.push_back(i.end);
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        int s = 0, e = 0;
        int cnt = 0;

        while(s < starts.size()){
            if(starts[s] < ends[e]){
                cnt++;
            } else {
                e++;
            }
            s++;
        }
        return cnt;
    }
};
