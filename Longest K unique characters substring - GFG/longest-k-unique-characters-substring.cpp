//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        
        int i=0, j=0, maxi = -1;
        
        unordered_map<char, int> maps;
        
        while (j < s.size()) {
            
            maps[s[j]]++;
            
            int count = maps.size();
            
            // if (count < k) j++;
            
            if (count == k) {
                maxi = max(maxi, j-i+1);
            }
            
            if (count > k) {
                
                while (count > k) {
                    maps[s[i]]--;
                    
                    if (maps[s[i]] == 0) {
                        maps.erase(s[i]);
                        count--;
                    }
                    i++;
                }
            }
            
            j++;
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends