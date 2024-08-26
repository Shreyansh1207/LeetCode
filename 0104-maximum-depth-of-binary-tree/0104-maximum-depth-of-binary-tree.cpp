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
    int maxDepth(TreeNode* root) {
        if(root== nullptr ) {
            return 0;
        }
        vector<int>result;
        traverse(root,result);
        return calculateDepth(root);
        
    }
     void traverse(TreeNode*node,vector<int>&result){
        if(node== NULL) return;
        traverse(node->left,result);
        result.push_back(node->val);
        traverse(node->right,result);
    }
     int calculateDepth(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        int leftDepth = calculateDepth(node->left);
        int rightDepth = calculateDepth(node->right);
        return 1 + max(leftDepth, rightDepth);
    }
        
    
};