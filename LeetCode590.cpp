
class Solution {
public:
    vector<int> ans;
    void dfs(Node * &node)
    {
        if(node == NULL)
        {
            return ;
        }
        for(auto &it : node -> children)
        {
            dfs(it);
        }
        ans.push_back(node->val);
    }
    vector<int> postorder(Node* root) {
        dfs(root);
        return ans;
    }
};
