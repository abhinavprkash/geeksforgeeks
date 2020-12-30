class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>sumFreq{{0,1}};
        
        int sum = 0;
        int res = 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum+= nums[i];
            if(sumFreq.count(sum-k))res+= sumFreq[sum-k]; 
            sumFreq[sum]++;
        }
        
        return res;
    }
};