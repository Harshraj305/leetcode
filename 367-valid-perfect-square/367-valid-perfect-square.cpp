class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long int i = 1, j = num;
        bool ans = false;
        while (i <= j) {
            long long mid = (i+j)/2;
            
            if ((mid * mid) == num) {
                ans = true;
                break;
            }
            else if ((mid * mid) > num) {
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return ans;
        
    }
};