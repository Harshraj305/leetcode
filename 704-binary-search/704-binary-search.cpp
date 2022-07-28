class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int idx = -1;
        int i=0, j=nums.size()-1;
        while (i <= j) {
            int mid = (i+j)/2;
            
            if (nums[mid] == target) {
                idx = mid;
                break;
            }
            else if (target > nums[mid]) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }
        
        return idx;
        
    }
};