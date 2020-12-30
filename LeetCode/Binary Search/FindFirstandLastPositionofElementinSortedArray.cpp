class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return {-1,-1};
        vector<int> result;
        //first position, ffffttt, p(x):x>=target, first t
        int low = 0, high = nums.size()-1, mid;
        while(low < high){
            mid = low+(high-low)/2;
                
            if(nums[mid]>=target)
                high = mid;
            else
                low = mid+1;
        }
        //sanity check means whether the elements satisfy our needs
        if(nums[low]== target)
            result.push_back(low);
        else
            return {-1, -1};
        
        //last position
        //if i reach here elemt exist
        //result contains the index of starting position
        //ffffttt 
        //p(x): 
        low = 0, high = nums.size() -1;
        while(low < high){
            mid= low + (high -low+1)/2;
            if(nums[mid] > target)
                high = mid -1;
            else
                low = mid;
        }
        result.push_back(low);
        return result;
            
    }
};