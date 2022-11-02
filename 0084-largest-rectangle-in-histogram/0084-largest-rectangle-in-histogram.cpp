class Solution {
public:
    
    vector<int> ngl(vector<int> arr) {
        vector<int> ans;
        stack<pair<int, int>> s;
        
        for (int i=0; i<arr.size(); i++) {    
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
    
    vector<int> ngr(vector<int> arr) {
        
        vector<int> ans;
        stack<pair<int, int>> s;
        
        int n = arr.size();
        for (int i=arr.size()-1; i>=0; i--) {

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
    
    int largestRectangleArea(vector<int>& heights) {
        
        int maxm = INT_MIN;
        vector<int> left = ngl(heights);
        vector<int> right = ngr(heights);
        
        for (int i=0; i<heights.size(); i++) {
            maxm = max(maxm, (right[i] - left[i] -1) * heights[i]);
        }
        
        return maxm;
        
    }
};