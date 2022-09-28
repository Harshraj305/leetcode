class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> ans;
        unordered_map<int, int> maps;
        
        for (auto i : nums) {
            maps[i]++;
        }
        
        int itr = 1;
        // for (auto i : nums) {
        for (int i=0; i<nums.size(); i++) {
            if (maps[itr] == 0) {
                ans.push_back(itr);
            }
            itr++;
        }
        
        return ans;
        
    }
};