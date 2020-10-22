class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> arr;
        if(intervals.size() == 0)
            return arr;
        sort(intervals.begin(), intervals.end());
        vector<int> temparr = intervals[0];
        
        for(auto it: intervals){
            if(it[0] <= temparr[1]){
                temparr[1] = max(it[1], temparr[1]);
            }
            else{
                arr.push_back(temparr);
                temparr = it;
            }
        }
        arr.push_back(temparr);
        return arr;
    }
};