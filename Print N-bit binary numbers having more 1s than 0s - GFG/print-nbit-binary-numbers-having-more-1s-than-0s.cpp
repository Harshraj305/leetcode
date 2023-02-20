//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
    void solve(string op,int one, int zero, int n, vector<string> &ans) {
        
        if (one + zero == n) {
            ans.push_back(op);
            return;
        }
        
        if (one == zero) {
            string temp = op;
            temp += "1";
            solve(temp, one+1, zero, n, ans);
        }
        if (one > zero) {
            string left = op;
            string right = op;
            
            left += "1";
            solve(left, one+1, zero, n, ans);
            
            right += "0";
            solve(right, one, zero+1, n, ans);
        }
    }
    
public:	
	vector<string> NBitBinary(int n) {
	    // Your code goes here
	    
	    vector<string> ans;
	    
	    solve("", 0, 0, n, ans);
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends