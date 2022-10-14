class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() < t.size()) {
            return false;
        }
        
        unordered_map<char, int> maps;
        
        for (int i=0; i<s.size(); i++) {
            maps[s[i]]++;
        }
        
        int count = maps.size();
        
        for (int i=0; i<s.size(); i++) {
            if (maps.find(t[i]) != maps.end()) {
                maps[t[i]]--;
                if (maps[t[i]] == 0) {
                    count--;
                }
            }
        }
        
        if (count == 0) {
            return true;
        }
        return false;
        
    }
};