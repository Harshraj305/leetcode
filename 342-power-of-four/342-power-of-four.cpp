class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if (n == 0) {
            return false;
        }
        
        int zero = 0, one = 0;
        while (n) {
            if ((n & 1) == 0) {
                zero++;
            }
            else {
                one++;
            }
            
            if (one > 1) {
                return false;
            }
            n >>= 1;
        }
        
        if (zero % 2 == 0) {
            return true;
        }
        return false;
        
        
    }
};