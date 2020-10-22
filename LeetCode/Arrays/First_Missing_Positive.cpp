class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i =0; i < nums.size(); i++){
            if(i+1 == nums[i])
                continue;
            int n = nums[i];
            while(n >= 1 && n <=nums.size() && n!= nums[n-1])
                swap(n, nums[n-1]);
        }
        for(int i =0; i < nums.size(); i++){
            if(i+1 != nums[i])
                return i+1;
        }
        return nums.size()+1;
    }
    
};