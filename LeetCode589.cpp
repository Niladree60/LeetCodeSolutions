class Solution {
public:
    vector<int> result;

    vector<int> preorder(Node* root) {
        dfs(root);
        return result;
    }
private:
    void dfs(Node* root)
    {
        if(root == NULL)
        {
            return ;
        }
        result.push_back(root->val);
        for( auto& child : root -> children)
        {
            dfs(child);
        }
    }
};
