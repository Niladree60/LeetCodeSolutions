class Solution {
public:
    int parent[26];

    int findParent(int node) {
        if(node == parent[node]) return node;
        return parent[node] = findParent(parent[node]);
    }

    bool equationsPossible(vector<string>& equations) {
        for(int i = 0 ; i < 26 ; i++) parent[i] = i;

        for(auto e : equations) {
            if(e[1] == '=') {
                parent[findParent(e[0] - 'a')] = findParent(e[3] - 'a');
            }
        }

        for(auto e : equations) {
            if(e[1] == '!' and findParent(e[0] - 'a') == findParent(e[3] - 'a')) {
               return false;
            }
        }

        return true;
    }
};
