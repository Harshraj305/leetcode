class Solution {
public:
    int mySqrt(int x) {
        
        long long int i = 1, j = x, mid;
        
        while (i <= j) {
            
            mid = i + (j-i)/2;
            
            if (mid * mid == x) {
                return mid;
            }
            else if (mid * mid > x) {
                j = mid -1;
            }
            else {
                i = mid +1;
            }
        }
        
        if (mid * mid > x) {
            return mid -1;
        }
        else {
            return mid;
        }
        
    }
};