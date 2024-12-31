class Solution {
public:
    void dfs(TreeNode* left_child, TreeNode* right_child, int level) {
        if(!left_child or !right_child) return;

        if(level % 2 == 1) {
            swap(left_child -> val, right_child -> val);
        }

        dfs(left_child -> left, right_child -> right, level + 1);
        dfs(left_child -> right, right_child -> left, level + 1);
    }
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        dfs(root-> left, root -> right, 1);
        return root;
    }
};
