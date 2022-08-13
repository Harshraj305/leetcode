class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0, j = s.size()-1;
        
        bool flag = true;
        
        while (i < j) {
            if ( !((s[i] >= 65 && s[i] <= 90) || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) ) {
                i++;
                continue;
            }
            if ( !((s[j] >= 65 && s[j] <= 90) || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9')) ) {
                j--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                flag = false;
                break;
            }
            else {
                i++, j--;
            }
        }
        
        return flag;
        
        
    }
};