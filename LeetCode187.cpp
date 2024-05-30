class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() < 10) return {};

        set<string> first, second;

        for(int i =0  ;i < s.size() - 9 ; i++) {
            string x = s.substr(i,10);

            if(first.count(x)) {
                second.insert(x);
            }
            first.insert(x);
        }
        vector<string> vc{second.begin(), second.end()};

        return vc;
    }
};
