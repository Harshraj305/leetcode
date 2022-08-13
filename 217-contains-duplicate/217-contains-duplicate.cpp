class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        bool flag = 0;
        unordered_map<int, bool> maps;
        for(int i=0; i<nums.size(); i++){
            if(maps.count(nums[i]) > 0){
                flag = 1;
                break;
            }
            else{
                maps[nums[i]] = true;
            }
        }
        return flag;
    }
};