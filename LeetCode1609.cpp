class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool is_even = true;

        while(!q.empty()) {    
            int q_size = q.size();
            int prev = is_even ? INT_MIN : INT_MAX;

            while(q_size--) {
                TreeNode* x = q.front();
                q.pop();

                if(is_even and (x -> val <= prev or x -> val % 2 == 0)) { return false; } 
                if(!is_even and (x -> val >= prev or x -> val % 2 != 0)) { return false; }
                
                prev = x -> val;
                if(x -> left) q.push(x -> left);
                if(x -> right) q.push(x -> right);
            }
            is_even = !is_even;
        }

        return true;
    }
};
