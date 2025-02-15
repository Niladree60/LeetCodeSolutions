class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        map<string, vector<string>> graph;
        map<string, int> in;
        set<string> st(supplies.begin(), supplies.end());
        queue<string> q;
        vector<string> ans;

        for(auto x : recipes) in[x] = 0;

        for(int i = 0 ; i < recipes.size() ; i++) {
            for(int j = 0 ; j < ingredients[i].size() ; j++) {
                if(!st.count(ingredients[i][j])) {
                    graph[ingredients[i][j]].push_back(recipes[i]);
                    in[recipes[i]]++;
                }
            }
        }

        for(auto x : in) {
            if(in[x.first] == 0) q.push(x.first);
        }

        while(!q.empty()) {
            auto cur = q.front();
            q.pop();
            ans.push_back(cur);

            for(auto child : graph[cur]) {
                in[child]--;

                if(in[child] == 0) q.push(child);
            } 
        }

        return ans;
    }
};
