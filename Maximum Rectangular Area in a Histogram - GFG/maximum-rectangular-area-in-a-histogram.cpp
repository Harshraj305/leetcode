//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    vector<long long> nsl (long long arr[], int n) {
        
        vector<long long> ans;
        stack<pair<int, int>> s;
        
        for (long long i=0; i<n; i++) {
            
            if (s.size() == 0) {
                ans.push_back(-1);
            }
            else if (s.size() > 0 && arr[i] > s.top().first) {
                ans.push_back(s.top().second);
            }
            else if (s.size() > 0 && arr[i] <= s.top().first) {
                while (s.size() > 0 && arr[i] <= s.top().first) {
                    s.pop();
                }
                if (s.size() == 0) {
                    ans.push_back(-1);
                }
                else {
                    ans.push_back(s.top().second);
                }
            }
            
            s.push({arr[i], i});
        }
        
        return ans;
        
    }
    
    vector<long long> nsr (long long arr[], int n) {
        
        vector<long long> ans;
        stack<pair<int, int>> s;
        
        for (long long i=n-1; i>=0; i--) {
            
            if (s.size() == 0) {
                ans.push_back(n);
            }
            else if (s.size() > 0 && arr[i] > s.top().first) {
                ans.push_back(s.top().second);
            }
            else if (s.size() > 0 && arr[i] <= s.top().first) {
                while (s.size() > 0 && arr[i] <= s.top().first) {
                    s.pop();
                }
                if (s.size() == 0) {
                    ans.push_back(n);
                }
                else {
                    ans.push_back(s.top().second);
                }
            }
            
            s.push({arr[i], i});
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    long long getMaxArea(long long arr[], int n) {
        // Your code here
        
        long long maxm = INT_MIN;
        vector<long long> left = nsl(arr, n);
        vector<long long> right = nsr(arr, n);
        
        // for (long long i=0; i<n; i++) {
        //     if (left[i] == -1 && right[i] == -1) {
        //         maxm = max(maxm, 1*arr[i]);
        //     }
        //     else if (left[i] == -1) {
        //         maxm = max(maxm, (right[i] * arr[i]));
        //     }
        //     else if (right[i] == -1) {
        //         maxm = max(maxm, (int(n)-1-left[i]) * arr[i]);
        //     }
        //     else {
        //         maxm = max(maxm, (right[i]-left[i]-1)*arr[i]);
        //     }
        // }
        
        
        for (long long i=0; i<n; i++) {
            maxm = max(maxm, (right[i]-left[i]-1)*arr[i]);
        }
        
        return maxm;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends