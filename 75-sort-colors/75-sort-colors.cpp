class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int bucket[3] = {0};
        for (int i=0; i<nums.size(); i++) {
            bucket[nums[i]]++;   
        }
        int j=0;
        for (int i=0; i<3; i++) {
            while (bucket[i]--) {
                nums[j++] = i;
            }
        }
    }
};