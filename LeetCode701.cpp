class Solution {
public:
    vector<int> vc;

    void inorder(TreeNode* root) {
        if(!root) return;

        inorder(root -> left);
        vc.push_back(root -> val);
        inorder(root -> right);
    }

    TreeNode* makeTree(vector<int> &vc) {
        if(vc.empty()) return NULL;

        int mid = vc.size() / 2;
        TreeNode * root = new TreeNode(vc[mid]);

        vector<int> leftPart(vc.begin(), vc.begin() + mid);
        vector<int> rightPart(vc.begin() + mid + 1, vc.end());

        root -> left = makeTree(leftPart);
        root -> right = makeTree(rightPart);

        return root;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        inorder(root);
        vc.push_back(val);
        sort(vc.begin(), vc.end());

        return makeTree(vc);
    }
};
