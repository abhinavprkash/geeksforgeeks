class Solution {
public:
    int minAddToMakeValid(string S) {
        int n = S.size(), i, diff = 0, res = 0;
        for(i =0;i<n;i++){
            if(S[i] == '(')
                diff++;
            else
                diff--;
            
            if(diff<0){
                res++;
                diff = 0;
            }
        }
        return diff+res;
    }
};