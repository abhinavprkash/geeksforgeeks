class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = INT_MAX;
        int maxP = 0;
        for(int i = 0; i< prices.size(); i++){
                n  = min(n,prices[i]);
                maxP = max(maxP,prices[i] - n);
        }
        return maxP;
    }
};