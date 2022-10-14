class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        unordered_map<char, int> maps;
        
        int i=0, j=0;
        
        for (int i=0;i<p.size(); i++) {
            maps[p[i]]++;
        }
        
        int k = p.size();
        int count = maps.size();
        
        while (j < s.size()) {
            
            if (maps.find(s[j]) != maps.end()) {
                maps[s[j]]--;
                if (maps[s[j]] == 0) {
                    count--;
                }
            }
            
            if (j-i+1 < k) {
                j++;
            }
            else if (j-i+1 == k) {
                if (count == 0) {
                    ans.push_back(i);
                }
                if (maps.find(s[i]) != maps.end()) {
                    maps[s[i]]++;
                    if (maps[s[i]] == 1) {
                        count++;
                    }
                }
                i++, j++;
            }
        }
        
        return ans;
        
        
        
        
        
    }
};