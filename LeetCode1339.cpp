class Solution {
public:
    long long total_sum = 0, max_pro = 0;

    void calculate_total_sum(TreeNode* root) {
        if(!root) return;

        total_sum += root -> val;
        calculate_total_sum(root -> left);
        calculate_total_sum(root -> right);
    }

    long long calculate_maximum_product(TreeNode* root) {
        if(!root) return 0;

        long long l = calculate_maximum_product(root -> left);
        long long r = calculate_maximum_product(root -> right);
        long long subtree_sum = l + r + root -> val;
        max_pro = max(max_pro, (total_sum - subtree_sum) * subtree_sum);

        return subtree_sum;
    }

    int maxProduct(TreeNode* root) {
        calculate_total_sum(root);
        calculate_maximum_product(root);

        return (int) (max_pro % 1000000007);
    }
};
