class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& a) {
        unordered_map<int, TreeNode*> mp;
        unordered_set<int> hasParent;

        for(int i = 0; i < a.size(); i++) {
            if(!mp.count(a[i][0])) mp[a[i][0]] = new TreeNode(a[i][0]);
            if(!mp.count(a[i][1])) mp[a[i][1]] = new TreeNode(a[i][1]);
            hasParent.insert(a[i][1]);
        }
        
        TreeNode* root;

        for(int i = 0; i < a.size(); i++) {
            if(a[i][2] == 1) {
                mp[a[i][0]] -> left = mp[a[i][1]];
            } else { 
                mp[a[i][0]] -> right = mp[a[i][1]];
            }
            if(!hasParent.count(a[i][0])) {
                root = mp[a[i][0]];
            }
        }
        return root;
    }
};
