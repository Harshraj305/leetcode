class Solution {
    public int searchInsert(int[] nums, int target) {
        
        int i = 0; int j = nums.length-1;
        int idx = -1;
        while (i <= j) {
            int mid = (i+j)/2;
            
            if (nums[mid] == target) {
                return mid;
            }
            else if (target > nums[mid]) {
                i = mid +1;
            }
            else {
                j = mid -1;
            }
        }
        
        if (idx == -1) {
            if (j<=i) {
                return i;
            }
            else {
                return j;
            }
        }
        return 0;
    }
}