class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool null_found = false;

        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                auto node = q.front();
                q.pop();

                if(node == NULL) {
                    null_found = true;
                } else {
                    if(null_found) {
                        return false;
                    }
                    q.push(node -> left);
                    q.push(node -> right);
                }
            }
        }

        return true;
    }
};
