class Solution {
public:
    
    int count(vector<int> nums, int i, int j, int mid) {
        
        int c = 0;
        for (int x=i; x<j; x++) {
                if (nums[x] == nums[mid]) {
                    c--;
                }
                c++;
            }
        return c;
    }
    
    int shift(int lc, int rc) {
        
        int m = 0;
        if (lc % 2 == 1) {
            m = -1;
        }
        else if (rc % 2 == 1) {
            m = 1;
        }
        return m;
    }
    
    
    int singleNonDuplicate(vector<int>& nums) {
        
        if (nums.size() == 1) {
            return nums[0];
        }
        
        int i = 0, j = nums.size()-1, mid;
        
        while (i <= j) {
            
            mid = i + (j-i)/2;
            
            int lc = count(nums, i, mid, mid);
            int rc = count(nums, mid+1, j+1, mid);

            int move = shift(lc, rc);
            
            if (move == -1) {
                if (nums[mid] == nums[mid-1]) {
                    j = mid -2;
                }
                else {
                    j = mid -1;
                }
            }
            else if (move == 1) {
                if (nums[mid] == nums[mid+1]) {
                    i = mid +2;
                }
                else {
                    i = mid +1;
                }
            }
            else {
                return nums[mid];
            }
        }
        
        return -1;
        
    }
};