class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int curr=0;
        int maxm = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            curr+=nums[i];
            if(curr > maxm){
                maxm = curr;
            }
            if(curr <= 0){
                curr = 0;
            }
        }
        return maxm;
    }
};