class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string lcp = "";
        int i,j;
        char curr_char;
        for(i = 0; i < strs[0].size(); i++){
            // comparing cjaracters of words in strs in position
            curr_char = strs[0][i];
            for(j =0;j< strs.size(); j++){
                if(strs[j][i] != curr_char)
                    break;
            }
            //all the chars are equal
            if(j == strs.size())
                lcp += curr_char;
            else
                break;
        }
        return lcp;
    }
};