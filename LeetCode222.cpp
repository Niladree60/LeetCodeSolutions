class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root) return 0;

        int left_height = 0, right_height = 0;
        TreeNode * l = root, * r = root;

        while(l) {
            left_height++;
            l = l -> left;
        } 

        while(r) {
            right_height++;
            r = r -> right;
        }    

        if(left_height == right_height) {
            return pow(2, left_height) - 1;
        }      

        return 1 + countNodes(root -> left) + countNodes(root -> right);
    }
};
