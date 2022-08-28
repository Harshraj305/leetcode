class Solution {
public:
    
    int binSearch(vector<int> nums, int i, int j) {
        
        int mid;
        
        while (i <= j) {
            mid = i + (j-i)/2;
            
            if (nums[mid] > nums[mid+1]) {
                return nums[mid+1];
            }
            else if (nums[mid-1] > nums[mid]) {
                return nums[mid];
            }
            else if (nums[mid] > nums[0]) {
                i = mid +1;
            } 
            else {
                j = mid -1;
            } 
        }
        
        return mid;
    }
    
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        
        if (n == 1) {
            return nums[0];
        }
        
        if (nums[0] < nums[n-1]) {
            return nums[0];
        }
        
        int res = binSearch(nums, 0, n-1);
        
        if (res != -1) {
            return res;
        }
        
        return -1;
    }
};