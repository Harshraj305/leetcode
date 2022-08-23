class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());
        
        // set<int> :: iterator i, j;
        
        
        for(auto i=set1.begin(); i!=set1.end(); i++) {
            
            int temp = *i; 
            auto j = set2.find(temp);
            
            if (j != set2.end()) {
                ans.push_back(*i);
            }
        }
        
        return ans;
        
    }
};