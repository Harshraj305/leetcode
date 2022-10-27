class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> ans;
        stack<int> s;
        
        for (int i=prices.size()-1; i>=0; i--) {
            
            if (s.size() == 0) {
                ans.push_back(prices[i]);
            }
            else if (s.size() > 0 && s.top() < prices[i]) {
                ans.push_back(prices[i] - s.top());
            }
            else if (s.size() > 0 && s.top() >= prices[i]) {
                while (s.size() > 0 && s.top() > prices[i]) {
                    s.pop();
                }
                if (s.size() == 0) {
                    ans.push_back(prices[i]);
                }
                else {
                    ans.push_back(prices[i] - s.top());
                }
            }
            
            s.push(prices[i]);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};