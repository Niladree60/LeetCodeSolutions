class Solution {
public:
    map<int, int> mp;

    void inorder(TreeNode * root) {
        if(!root) return;
        inorder(root -> left);
        mp[root -> val]++;
        inorder(root -> right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        int mx_freq = INT_MIN, mx_element;
        vector<int> ans;

        for(auto it : mp) {
            if(it.second > mx_freq ){
                mx_freq = it.second;
                mx_element = it.first;
            }
        }

        for(auto it : mp) {
            if(it.second == mx_freq) ans.push_back(it.first);
        }

        return ans;
    }
};
