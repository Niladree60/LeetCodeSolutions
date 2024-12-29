class Solution {
public:
    int sum = 0;
    void dfs(TreeNode * current, TreeNode * parent, TreeNode * grand_parrent) {
        if(!current) return;
        if(grand_parrent and grand_parrent -> val % 2 == 0) {
            sum += current -> val;
        }
        dfs(current -> left, current, parent);
        dfs(current -> right, current, parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root, nullptr, nullptr);
        return sum;
    }
};
