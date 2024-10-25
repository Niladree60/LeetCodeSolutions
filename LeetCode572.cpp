class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(isSame(root,subRoot)) return true;
        else return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
    }

private:
    bool isSame(TreeNode* root, TreeNode* subRoot) {
        if(!root and !subRoot) return true;
        if(!root == NULL or !subRoot == NULL) return false;
        if(root -> val != subRoot -> val) return false;
        else return isSame(root->left, subRoot->left) and isSame(root->right, subRoot->right);

    }
};
