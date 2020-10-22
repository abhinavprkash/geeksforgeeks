class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int n=nums.size();
        vector<int>res(n,1);
        for(int i=1;i<n;i++){
            product*=nums[i-1];
            res[i]*=product;
        }
        product=1;
        for(int i=n-2;i>=0;i--){
            product*=nums[i+1];
            res[i]*=product;
        }
        return res;
        
    }
};