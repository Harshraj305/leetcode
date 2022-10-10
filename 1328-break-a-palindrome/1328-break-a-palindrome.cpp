class Solution {
public:
    string breakPalindrome(string palindrome) {
        
        int n = palindrome.size(), idx;
        char temp;
        if (n == 1) {
            return "";
        }
        
        for (int i=0; i<n; i++) {
            if (palindrome[i] != 'a') {
                temp = palindrome[i];
                idx = i;
                palindrome[i] = 'a';
                break;
            }
        }
        
        bool check = true;
        for (int i=0; i<n; i++) {
            if (palindrome[i] == 'a') {
                check = true;
            }
            else {
                check = false;
                break;
            }
        }
        
        if (check == true) {
            palindrome[idx] = temp;
            palindrome[n-1] = 'b';
        }
        return palindrome;
    }
};