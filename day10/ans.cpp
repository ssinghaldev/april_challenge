class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i = S.size() - 1;
        int j = T.size() - 1;
        
        while(i >= 0 || j >= 0) {
            int skipSChars = 0;
            while(i >= 0) {
                if(S[i] == '#') {
                    skipSChars++;
                    i--;
                } else if(skipSChars > 0) {
                    skipSChars--;
                    i--;
                } else {
                    break;
                }
            }
            
            int skipTChars = 0;
            while(j >= 0) {
                if(T[j] == '#') {
                    skipTChars++;
                    j--;
                } else if(skipTChars > 0) {
                    skipTChars--;
                    j--;
                } else {
                    break;
                }
            }
            
            if((i >= 0) != (j >= 0)) {
                return false;
            } else if(i < 0) {
                return true;
            } else if(S[i] != T[j]){
                return false;
            }
            
            i--;
            j--;
        }
        
        return true;
    }
};
