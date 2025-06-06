class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char, int> mp;

        for(int i = 0 ; i < order.size() ; i++) {
            mp[order[i]] = i;
        } 

        for(auto &word : words) {
            for(char &x : word) {
                x = mp[x];
            }
        }

        return is_sorted(words.begin(), words.end());
    }
};
