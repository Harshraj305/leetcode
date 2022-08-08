class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k %= n;
        vector<int> arr;
        
        for (int i=0; i<nums.size(); i++) {
            arr.push_back(nums[(n-k+i) % n]);
        }
        
        nums = arr;
        
      
    }
};