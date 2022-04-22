class Solution {
    public int titleToNumber(String columnTitle) {
        
        int ans = 0;
        
        int idx = columnTitle.length()-1;
        for (char ch : columnTitle.toCharArray()) {
            ans+= Math.pow(26, idx)*(ch-'A'+1);
            idx--;
        }
        
        return ans;
        
    }
}