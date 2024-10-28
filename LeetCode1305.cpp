class Solution {
public:
    vector<int> vc;

    void inorder(TreeNode* root) {
        if(!root) return;

        inorder(root -> left);
        vc.push_back(root-> val);
        inorder(root -> right);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);

        sort(vc.begin(), vc.end());
        return vc;
    }
};
