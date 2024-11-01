class Solution {
public:
    TreeNode * firstMissingNode = NULL;
    TreeNode * secondMissingNode = NULL;
    TreeNode * previousNode = NULL;

    void inorder(TreeNode* root) {
        if(!root) return;
        inorder(root -> left);

        if(!firstMissingNode and root -> val < previousNode -> val) {
            firstMissingNode = previousNode;
        }

        if(firstMissingNode and root -> val < previousNode -> val) {
            secondMissingNode = root;
        }

        previousNode = root;

        inorder(root -> right);
    }

    void recoverTree(TreeNode* root) {
        previousNode = new TreeNode(INT_MIN);
        inorder(root);
        swap(firstMissingNode -> val, secondMissingNode -> val);
    }
};
