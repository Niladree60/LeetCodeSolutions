class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;

        if(root)q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            
            for(int i = 0 ; i < size ; i++){
                auto cur = q.front();
                q.pop();
                
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);

                if(i == size - 1) cur -> next = NULL;
                else cur -> next = q.front();
            }
        }
        return root;
    }
};
