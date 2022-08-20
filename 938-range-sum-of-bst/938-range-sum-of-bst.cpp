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
public:
    void inorder(TreeNode* root, vector<int> &nums) {
        if (root == NULL) {
            return;
        }
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
    
        vector<int> nums;
        inorder(root, nums);
        
        int sum = 0;
        
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > high) {
                break;
            }
            if (nums[i] >= low && nums[i] <= high) {
                sum += nums[i];
            }
        }
        
        return sum;
    }
};