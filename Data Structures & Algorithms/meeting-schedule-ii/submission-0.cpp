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
        vector<int> start, end;

        for(auto interval : intervals){
            start.push_back(interval.start);
            end.push_back(interval.end);
        }

        std::sort(start.begin(), start.end());
        std::sort(end.begin(), end.end());

        int rooms = 0;
        int answer = 0;
        int starts = 0;
        int ends = 0;

        while (starts < intervals.size()){
            if(start[starts] < end[ends]){
                starts++;
                rooms++;
            } else {
                ends++;
                rooms--;
            }
            answer = std::max(answer, rooms);
        }

        return answer;
    }
};
