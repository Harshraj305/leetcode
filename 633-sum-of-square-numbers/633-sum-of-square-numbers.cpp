class Solution {
public:
    bool judgeSquareSum(int c) {
        
        if (c == 1 || c ==2) {
            return true;
        }
        
        long long int x = sqrt(c);
        if (x*x == c) {
            return true;
        }
        
        bool flag = false;
        long long int i = 1, j = sqrt(c), mid;
        
        while (i <= j) {
            
            mid = (i+j)/2;
            
            if ((i*i + j*j) == c) {
                flag = true;
                break;
            }
            else if ((i*i + j*j) < c) {
                i++;
            }
            else {
                j--;
            }
        }
        
        return flag;
        
    }
};