class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int sum1=0, sum2=0;
        for(int i=0; i<s.size(); i++){
            sum1+=s[i];
            sum2+=t[i];
        }
        sum2+=t[t.size()-1];
        
        return (sum2-sum1);
    }
};