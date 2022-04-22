class Solution {
    public int search(int[] nums, int target) {
        
        if (nums.length == 0) {
            return -1;
        }
        
        Arrays.sort(nums);
        
        int i = 0;
        int j = nums.length-1;
        int idx = -1;
        
        while (i <= j) {
            int mid = (i+j)/2;
            
            if (nums[mid] == target) {
                idx = mid;
                break;
            }
            else if (target > nums[mid]) {
                i = mid+1;
            }
            else {
                j = mid-1;
            }
        }
        return idx;
        
    }
}