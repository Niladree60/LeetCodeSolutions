class Solution 
{
    vector<int> rank ,  parent;

    int findYourParent(int node) {
        if(node == parent[node]) return node;
        return parent[node] = findYourParent(parent[node]);
    }

    void unionByRank(int u , int v) {
        int pu = findYourParent(u);
        int pv = findYourParent(v);

        if(pu == pv) return;

        if(rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } else if(rank[pv] < rank[pu]) {
            parent[pv] = pu;
        } else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
    
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int size = accounts.size();
        rank.resize(size, 0);
        parent.resize(size);
        unordered_map<string , int> emailToIndex;
        unordered_map<int, vector<string>> indexToEmails;
        vector<vector<string>> res;

        for(int i = 0 ; i < size ; i++) parent[i] = i;
        
        for(int i = 0 ; i < size ; i++) {
            for(int j = 1 ; j < accounts[i].size() ; j++) {
                string email = accounts[i][j];

                if(!emailToIndex.count(email)) {
                    emailToIndex[email] = i;
                } else {
                    unionByRank(i , emailToIndex[email]);
                }
            }
        }
        
        for(auto it = emailToIndex.begin() ; it != emailToIndex.end() ; it++) {
            string email = it->first;
            int id = it->second;
            int root = findYourParent(id);
            indexToEmails[root].push_back(email);
        }
        
        for(auto it = indexToEmails.begin() ; it != indexToEmails.end() ; it++) {
            sort(it->second.begin() , it->second.end());
            vector<string> temp = {accounts[it->first][0]};
            temp.insert(temp.end() , it->second.begin() , it->second.end());
            res.push_back(temp);
        }
        
        return res;
    }
};
