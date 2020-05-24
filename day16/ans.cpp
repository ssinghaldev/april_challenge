// This is something I didn't get. This is borrowed from the solution presented
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;
        
        for(auto ch: s) {
            if(ch == '(') {
                low += 1;
            } else {
                low -= 1;
            }
            
            if(ch != ')') {
                high += 1;
            } else {
                high -= 1;
            }
            
            if(high < 0) {
                return false;
            }
            
            low = max(0, low);
        }
        
        return low == 0;
    }
};
