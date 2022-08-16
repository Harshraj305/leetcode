class Solution {
public:
    string convertToTitle(long long int columnNumber) {
        
        long long int rem;
        string ans = "";
        while (columnNumber != 0) {
            rem = columnNumber % 26;
            if (rem == 0) {
                rem = 26;
                columnNumber -= 1;
            }
            ans += (rem + 'A' - 1);
            columnNumber /= 26;
        } 
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};