class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1 ) {
            return nums[0];
        }
        
        sort(nums.begin(), nums.end());
        
        int ans = nums[nums.size()/2];
        return ans;
        
    }
};