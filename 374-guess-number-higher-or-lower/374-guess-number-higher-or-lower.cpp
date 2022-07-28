/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long long i = 1, j = n;
        int idx = -1;
        
        while (i <= j) {
            long long int mid = (i+j)/2;
            int hint = guess(mid);
            
            if (hint == 0) {
                idx = mid;
                break;
            }
            else if (hint == 1) {
                i = mid + 1;
            }
            else {
                j = mid -1;
            }
        }
        return idx;
        
    }
};