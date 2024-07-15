class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
       vector<int> pos, neg, ans;
       for(int x : a) {
        if(x < 0 ) neg.push_back(x);
        else pos.push_back(x);
       }

       int i = 0 ;
       while(i < pos.size()) {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
        i++;
       }

       return ans;

    }
};
