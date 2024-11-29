class Solution {
public:
    vector<vector<int>> vc;
    vector<int> temp;

    void dfs(TreeNode* root, int targetSum) {
        if(!root) return;
        temp.push_back(root -> val);

        if(!root -> left and !root -> right and root -> val == targetSum) {
            vc.push_back(temp);
        }

        dfs(root -> left, targetSum - root -> val);
        dfs(root -> right, targetSum - root -> val);

        temp.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);

        return vc;
    }
};
