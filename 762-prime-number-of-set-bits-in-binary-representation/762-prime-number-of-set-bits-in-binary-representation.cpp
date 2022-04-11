class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        
        int count, prm = 0;
        for (int i=left; i<=right; i++) {
            int n = i;
            count = 0;
            while (n) {
                n &= n-1;
                count++;
            }
            if ((count == 2) | (count == 3) || (count == 5) || (count == 7) || (count == 11) || (count == 13) || (count == 17) || (count == 19)) {
                prm++;
            }
        }
        return prm;
    }
};