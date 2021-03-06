class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do {
            slow = digitSquareSum(slow);
            fast = digitSquareSum(digitSquareSum(fast));
            if(fast == 1) {
                return true;
            }
        } while(slow != fast);
        
        return false;
    }

private:
    int digitSquareSum(int n) {
        int sum = 0;
        while(n != 0) {
            int digit = n % 10;
            sum += (digit*digit);
            n /= 10;
        }
        
        return sum;
    }
};