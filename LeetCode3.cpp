class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, maxL = 0, n = s.size();
        map<char, int> mp;

        while(end < n) {
            char end_char = s[end];
            mp[end_char]++;

            while(end - start + 1 != mp.size()) {
                char start_char = s[start];
                mp[start_char]--;

                if(mp[start_char] == 0) {
                    mp.erase(start_char);
                }

                start++;
            }

            maxL = max(maxL, end-start+1);
            end++;
        }

        return maxL;
    }
};
