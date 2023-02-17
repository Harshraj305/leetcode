//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> geekNum) {
        // code here
        
        int i=0, j=0;
        long long sum = 0;
        
        while (n--) {
            
            sum += geekNum[j];
            
            if (j-i+1 < k) {
                j++;
            }
            else if (j-i+1 == k) {
                
                geekNum.push_back(sum);
                
                sum -= geekNum[i];
                
                i++, j++;
            }
        }
        
        return geekNum[geekNum.size()-2];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends