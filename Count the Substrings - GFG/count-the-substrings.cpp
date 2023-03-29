//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string s) {
        // code here
        
        int ans = 0, upper = 0, lower = 0;
        
        for(int i=0; i<s.size(); i++) {
            
            upper = 0, lower = 0;
            
            for (int j=i; j<s.size(); j++) {
                
                if (isupper(s[j])) upper++;
                else lower++;
                
                
                if (upper == lower) ans++;
            }
            
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends