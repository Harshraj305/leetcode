class Solution {
    public int strStr(String haystack, String needle) {
        
        int h = haystack.length();
        int req = needle.length();
        
        for(int i=0; i<h-req+1; i++) {
           if (haystack.substring(i, i+req).equals(needle)) {
               return i;
           } 
        }
        return -1;
        
        
        
    }
}