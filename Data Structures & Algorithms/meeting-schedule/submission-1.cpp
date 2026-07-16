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
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [&] (Interval a, Interval b){
            return a.end < b.end;
        });

        int curStart = intervals[0].start;
        int curEnd = intervals[0].end;

        for(int i = 1; i<intervals.size(); i++){
            if(intervals[i].start >= curEnd){
                curEnd = max(intervals[i].end, curEnd);
            } else {
                return false;
            }
        }

        return true;
    }
};
