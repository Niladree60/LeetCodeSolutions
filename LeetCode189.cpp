class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        k = k%n;
        if(k == 0)
        {
            return;
        }
        reverse(a.begin(),a.end()-k);
        reverse(a.end()-k,a.end());
        reverse(a.begin(),a.end());
    }
};
