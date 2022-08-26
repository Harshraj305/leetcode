class Solution {
public:
    
    int binSearch(vector<int>& arr, int i, int j, int target) {
        
        while (i <= j) {
            
            int mid = i + (j-i)/2;
            
            if (arr[mid] == target) {
                return mid;
            }
            else if (arr[mid] > target) {
                j = mid -1;
            }
            else {
                i = mid +1;
            }
        }
        
        return -1;
        
    }
    
    int search(vector<int>& nums, int target) {
        
        int pivot;
        
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return 0;
            }
            else {
                return -1;
            }
        }
        
        for (int i=0; i<nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) {
                pivot = i+1;
                break;
            }
        }
        
        int res = binSearch(nums, 0, pivot-1, target);
        
        if (res != -1) {
            return res;
        } 
        else {
            res = binSearch(nums, pivot, nums.size()-1, target);
            return res;
        }
        
        return -1;
        
    }
};