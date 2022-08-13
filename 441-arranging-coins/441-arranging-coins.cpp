class Solution {
public:
    int arrangeCoins(long long int n) {
        
        n *= 2;
        long long int a = (1 + (sqrt(1 + 4*n)))/2;
        
        return a-1;
        
    }
};