class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans = nums;
        sort(ans.begin(), ans.end());
        
        int low = 0;
        int high = nums.size()-1;
        
        int arr[2];
        
        while(low < high){
            int sum = ans[low] + ans[high];
            
            if(sum < target){
                low++;
            }
            else if(sum > target){
                high--;
            }
            else if(sum == target){
                arr[0] = ans[low];
                arr[1] = ans[high];
                break;
            }
        }
        vector<int> manoj;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == arr[0]){
                manoj.push_back(i);
            }
            else if(nums[i] == arr[1]){
                manoj.push_back(i);
            }
        }
        return manoj;
    }
};