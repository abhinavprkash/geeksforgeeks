class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans(l.size());
        for (int i = 0; i < l.size(); i++) {
            vector<int> s(nums.begin() + l[i], nums.begin() + r[i] + 1);
            sort(s.begin(), s.end());
            int g = s[1] - s[0];
            ans[i] = true;
            for (int j = 1; j < s.size(); j++) {
                if (s[j] - s[j - 1] != g) {
                    ans[i] = false;
                    break;
                }
            }
        }
        return ans;
    }
};