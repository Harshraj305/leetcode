/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
private:
    
    void inorder(TreeNode *root, vector<int> &nums) {
        if (root == NULL) {
            return;
        }
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    } 
    
public:
    int getMinimumDifference(TreeNode* root) {
        
        vector<int> nums;
        inorder(root, nums);
        int minm = INT_MAX;
        
        for (int i=0; i<nums.size()-1; i++) {
            minm = min(minm, abs(nums[i] - nums[i+1]));
        }
        
        return minm;
        
    }
};