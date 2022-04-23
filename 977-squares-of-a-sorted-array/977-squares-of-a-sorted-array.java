class Solution {
    public int[] sortedSquares(int[] nums) {
        
        int[] arr = new int[nums.length];
        int i=0, j=nums.length-1;
        int idx = j;
        while (i <= j) {
            if (Math.abs(nums[i]) > Math.abs(nums[j])) {
                arr[idx] = nums[i]*nums[i];
                i++;
            }    
            else {
                arr[idx] = nums[j]*nums[j];
                j--;
            }
            idx--;
        }
        
        return arr; 
        
    }
}