class Solution {
public:
    vector<int> vc;
    
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);

        return vc[k-1];
    }

private:
    void inorder(TreeNode * root) {
        if(!root) return;

        inorder(root->left);
        vc.push_back(root->val);
        inorder(root->right);
    }
};
