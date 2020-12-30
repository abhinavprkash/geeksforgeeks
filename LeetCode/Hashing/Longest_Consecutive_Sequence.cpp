
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mySet;
        for(int i = 0; i<nums.size(); i++)
            mySet.insert(nums[i]);
        int result = 0;
        while(mySet.size() > 0){
            int n = *mySet.begin();
            int cnt = 1;
            mySet.erase(n);
            int smaller = n-1;
            int bigger = n+1;
            while(mySet.count(smaller)>0){
                mySet.erase(smaller);
                smaller--;
                cnt++;
            }
            while(mySet.count(bigger)>0){
                mySet.erase(bigger);
                bigger++;
                cnt++;
            }
            result = max(result, cnt);
        }
        return result;
    }
};