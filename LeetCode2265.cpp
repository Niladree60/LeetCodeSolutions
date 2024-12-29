class Solution {
public:
    int ans = 0;
    pair <int, int> dfs(TreeNode * root) {
        if(!root) return {0, 0};
        pair <int, int> left = dfs(root -> left);
        pair <int, int> right = dfs(root -> right);
        int sum = root -> val + left.first + right.first;
        int total_node = 1 + left.second + right.second;

        if(sum / total_node == root -> val) ans++;

        return {sum, total_node}; 
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
