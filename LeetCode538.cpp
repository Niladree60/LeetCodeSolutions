class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        convertBST(root -> right);
        root -> val += sum;
        sum = root -> val;
        convertBST(root -> left);
        return root;
    }
};
