class Solution {
public:
    TreeNode* dummy = new TreeNode(0);
    
    void inorder(TreeNode * root) {
        if(!root) return;

        inorder(root -> left);

        root -> left = NULL;
        dummy -> right = root;
        dummy = root;

        inorder(root -> right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode * ans = dummy;
        inorder(root);

        return ans -> right;    
    }
};
