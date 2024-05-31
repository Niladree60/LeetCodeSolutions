class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& s, vector<string>& t) {
        string first = "", second = "";

        for(string x : s) {
            first += x;
        }

        for(string x : t) {
            second += x;
        }

        return first == second;
    }
};
