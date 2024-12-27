class Solution {
public:  
    TreeNode* sufficientSubset(TreeNode* root, int limit, int sum = 0) {
        if(!root)  return NULL;
        
        if(!root->left && !root->right)
           return root ->  val + sum < limit ? NULL : root;
        
        root->left = sufficientSubset(root->left, limit, sum + root->val);
        root->right = sufficientSubset(root->right, limit, sum + root->val);
        
        return !root->left && !root->right ? NULL : root;
    }
};
