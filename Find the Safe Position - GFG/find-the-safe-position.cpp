//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    void solve(vector<int> &nums, int k, int i) {
        
        if (nums.size() == 1) {
            return;
        }
        
        i += k;
        if (i >= nums.size()-1) {
            i %= nums.size();
        }
        
        nums.erase(nums.begin() + i);
        
        solve(nums, k, i);
    }
    
    
  public:
    int safePos(int n, int k) {
        // code here
        
        vector<int> nums;
        for (int i=0; i<n; i++) {
            nums.push_back(i+1);
        }
        
        k--;
        
        solve(nums, k, 0);
        
        return nums[0];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends