class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<string> q;
        q.push(beginWord);
        int level = 1;

        while(!q.empty()) {
            int n = q.size();
            
            while(n--) {
                string word = q.front();
                q.pop();
                st.erase(word);
                
                if(word == endWord) {
                    return level;
                }

                for(int i = 0 ; i < word.size() ; i++) {
                    char temp = word[i];

                    for(int k = 0 ; k < 26 ; k++){
                        word[i] = k + 'a';
                        
                        if(st.count(word)) {
                            q.push(word);
                        }
                    }

                    word[i] = temp;
                }
            }

            level++;
        }

        return 0;
    }
};
