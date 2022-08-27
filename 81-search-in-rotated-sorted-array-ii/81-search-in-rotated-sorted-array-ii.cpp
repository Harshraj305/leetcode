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
    
    int pivotFind(vector<int> nums) {
        
        if (nums.size() == 1) {
            return 0;
        }
        if (nums[0] < nums[nums.size()-1]) {
            return 0;
        }
        
        for (int i=0; i<nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) {
                return i+1;
            }
        }
        
        return 0;
    }
    
    int search(vector<int>& nums, int target) {
        
        int pivot;
        
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return true;
            }
            else {
                return false;
            }
        }
        
        pivot = pivotFind(nums);
        
        int res;
        
        if (pivot != 0) {
            res = binSearch(nums, 0, pivot-1, target);
            if (res != -1) {
                return true;
            } 
            else {
                res = binSearch(nums, pivot, nums.size()-1, target);
            }
        }
        else {
            res = binSearch(nums, 0, nums.size()-1, target);
            if (res != -1) {
                return true;
            }
            else {
                return false;
            }
        }
        
        if (res != -1) {
            return true;
        }
        
        return false;
        
        
    }
};