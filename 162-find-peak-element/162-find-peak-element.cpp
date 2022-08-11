class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int i = 0, j = nums.size()-1;
        int mid;
        
        if (nums.size() == 1) {
            return 0;
        }
        
        while (i < j) {
            mid = (i+j)/2;
            
            if (nums[mid] < nums[mid+1]) {
                i = mid +1;
            }
            else {
                j = mid;
            }
        }
        
        return i;
        
    }
};