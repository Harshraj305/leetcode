class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int[] arr = new int[2];
        int i=0; int j=nums.length-1;
        
        while (i < j) {
            int mid = (i+j)/2;
            
            if (nums[i] + nums[j] == target) {
                break;
            }
            else if (target > nums[i] + nums[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        arr[0] = i+1;
        arr[1] = j+1;
         
        
        return arr;
        
    }
}