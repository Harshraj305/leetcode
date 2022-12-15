class Solution {
public:
    string minWindow(string s, string t) {
        
        if (t.size() > s.size()) {
            return "";
        }
        
        unordered_map<char, int> maps;
        
        for (int i=0; i<t.size(); i++) {
            maps[t[i]]++;
        }
        
        int count = maps.size();
        int ans = INT_MAX;
        int j = 0, i = 0, st =-1, e =-1;
        
        while (j < s.size()) {
            
            if (maps.find(s[j]) != maps.end()) {
                maps[s[j]]--;
                if (maps[s[j]] == 0) {
                    count--;
                }
            }
            if (count != 0) {
                j++;
            }
            if (count == 0) {
                while (count == 0  && i <= j) {
                    if (maps.find(s[i]) != maps.end()) {
                        
                        maps[s[i]]++;
                        if (maps[s[i]] > 0) {
                            count++;   
                        }
                        
                        if (j-i+1 < ans) {
                            ans = min(ans, j-i+1);
                            st = i;
                            e = j;
                        }
                        
                    }
                    i++;
                }
                j++;
            }
            
        }
        
        if (st == -1 && e == -1) return "";
        return s.substr(st, e-st+1);
        
    }
};