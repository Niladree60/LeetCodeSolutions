class Solution {
public:
    int xorBeauty(vector<int>& a) {
        int x = a[0];
        for(int i = 1 ; i < a.size() ; i++)
        {
            x = x^a[i];
        }
        return x;
    }
};
