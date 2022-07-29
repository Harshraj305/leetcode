class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        
        int i = 0;
        int j = nums.size()-1;
        int mid;
        
        while(i <= j){
            mid = (i+j)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target > nums[mid]){
                i = mid+1;
            }
            else {
                j = mid-1;
            }
        }
        if(target > nums[mid]){
            return mid+1; 
        }
        else{
            return mid;
        }
    }
};