class Solution {
    public String reverseWords(String s) {
        
        String ans = "";
        String[] newstr = s.split(" ");
        
        for(String i : newstr) {
            StringBuffer temp = new StringBuffer(i);
            temp.reverse();
            ans+=temp + " ";
        }
        
        return ans.trim();
    }
}