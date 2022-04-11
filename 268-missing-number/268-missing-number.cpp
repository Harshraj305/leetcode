class Solution {
public:
    
    
    int missingNumber(vector<int>& nums) {
        
        int flag;
        int n = nums.size();
        
        if (n % 4 == 1) 
            flag = 1;
        if (n % 4 == 2)
            flag = (n+1);
        if (n % 4 == 3) 
            flag = 0;
        if (n % 4 == 0)
            flag = (n);
        
        
        int xorsum = 0;
        for(int i=0; i<nums.size(); i++){
            xorsum =  xorsum ^ nums[i];
        }
        return xorsum ^ flag;
    }
};