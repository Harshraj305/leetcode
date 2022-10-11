class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int size = s.size(), count = 0;
        int i = 0, j = 0;
        
        while (j < size) {
            
            if (j-i+1 < 3) {
                j++;
            }
            else if (j-i+1 == 3) {
                if (s[i] != s[i+1] && s[i+1] != s[j] && s[j] != s[i]) {
                    count++;
                }
                i++, j++;
            } 
        } 
        
        return count;
        
    }
};