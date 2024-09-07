class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> ans;
        string pref = "";

        for(auto c: searchWord) {
            pref += c;
            vector<string> suggestions;

            auto it = lower_bound(products.begin(), products.end(), pref);

            int i = 0;
            while(i < 3 and it != products.end() and it-> substr(0, pref.size()) == pref){
                suggestions.push_back(*it);
                i++;
                it++;
            }

            ans.push_back(suggestions);
        }

        return ans;
    }
};
