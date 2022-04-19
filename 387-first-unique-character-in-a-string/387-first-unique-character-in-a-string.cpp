class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> maps;
        for (int i=0; i<s.size(); i++) {
            maps[s[i]]++;
        }
        
        int idx = -1;
        for (int i=0; i<s.size(); i++) {
            if (maps[s[i]] == 1) {
                idx = i;
                break;
            }
        }
        return idx;
    }
};