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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(q==NULL&&p==NULL)return true;
        if(p&&!q)return false;
        if(!p&&q)return false;
        auto meraans=true;
        if(p&&q){
            meraans=p->val==q->val;
        }
        auto leftkaans=isSameTree(p->left,q->right);
        auto rightkaans=isSameTree(p->right,q->left);

        return meraans&&leftkaans&&rightkaans;
    }
    bool isSymmetric(TreeNode* root) {
       if(!root)return true;

       return isSameTree(root->left,root->right);
    }
};