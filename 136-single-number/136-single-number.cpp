class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int ans = nums[nums.size()-1];
        
        if(nums.size() == 1) {
            return ans;
        }
        for(int i=0; i<nums.size()-1; i=i+2) {
            if(nums[i] != nums[i+1]){
                ans = nums[i];
                break;
            }
        }
        return ans;
        
    }
};