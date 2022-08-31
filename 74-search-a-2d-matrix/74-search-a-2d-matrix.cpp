class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if (matrix.size() == 1 && matrix[0].size() == 1 && matrix[0][0] == target) {
            return true;
        }
        
        int r = matrix.size(), c = matrix[0].size();
        int i = 0, j = r-1, mid;
        
        while (i < j) {
            mid = i + (j-i)/2;
            
            if (matrix[mid][c-1] == target) {
                return true;
            }
            else if (target > matrix[mid][c-1]) {
                i = mid +1;
            }
            else {
                j = mid;
            }
        }
        // cout<<i<<endl;
        int a = 0, b = c-1, nmid;
        
        while (a <= b) {
            nmid = a + (b-a)/2;
            
            if (matrix[i][nmid] == target) {
                return true;
            }
            else if (target > matrix[i][nmid]) {
                a = nmid +1;
            }
            else {
                b = nmid -1;
            }
        }
        // cout<<nmid<<endl;
        
        return false;
    }
};