class Solution {
public:
    int lengthOfLastWord(string s) {
        string word;
        stringstream iss(s);
        vector<string> vc;

        while (iss >> word){
            vc.push_back(word);
        }
        
        if(vc.empty()) 
        {
            return 0;
        }
        return vc.back().size();
    }
};
