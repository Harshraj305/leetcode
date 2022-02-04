class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char ch;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<t.size(); i++){
            if(s[i] != t[i]){
                ch = t[i];
                break;
            }
        }
        return ch;
        
    }
};