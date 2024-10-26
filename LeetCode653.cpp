class Solution {
public:
    vector<int> vc;

    bool findTarget(TreeNode* root, int k) {
        inorder(root);

        int i = 0, j = vc.size() - 1;
        while(i < j) {
            int x = vc[i] + vc[j];

            if(x == k) {
                return true;
            } else if (x > k) {
                j--;
            } else {
                i++;
            }
        }

        return false;
    }

private:
    void inorder(TreeNode * root) {
        if(!root) return;

        inorder(root -> left);
        vc.push_back(root->val);
        inorder(root -> right);
    }
};
