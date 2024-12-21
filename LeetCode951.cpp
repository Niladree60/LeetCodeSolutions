class Solution {
public:
    bool flipEquiv(TreeNode* s, TreeNode* t) {
        if(s == NULL and t == NULL)
        {
            return true;
        }
        if((s == NULL and t != NULL) or (s != NULL and t == NULL) or(s->val != t->val))
        {
            return false;
        }
        // No Flip - Flip
        return (flipEquiv(s->left, t->left) and flipEquiv(s->right,t->right)) or ((flipEquiv(s->left,t->right) and flipEquiv(s->right,t->left)) );
    }
};
