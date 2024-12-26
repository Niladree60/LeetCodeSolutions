class Solution {
public:
    string s = "~";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    void dfs(TreeNode * root, string path) {
        if(!root) return;
        path = alphabet[root -> val] + path;
        if(!root -> left and !root -> right) {
            s = min(path, s);
        }

        dfs(root -> left, path);
        dfs(root -> right, path);
    }

    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return s;
    }
};
