class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> ans;
        int xorsum = 0;
        for(int i=0; i<nums.size(); i++) {
            xorsum = xorsum^nums[i];
        }

        int pos = 0;
        while (xorsum) {
            if (xorsum & 1 == 1) {
                break;
            }
            xorsum = xorsum>>1;
            pos++;
        }

        int a = 0, b = 0;
        for (int i=0; i<nums.size(); i++) {
            if ( (nums[i] & (1<<pos)) == 0) {
                a = a^nums[i];
            }
            else {
                b = b^nums[i];
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
        
    }
};