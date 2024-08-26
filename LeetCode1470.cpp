class Solution {
public:
    vector<int> shuffle(vector<int>& a, int n) {
        int size = a.size();
        int i =0 , j = n;
        vector<int> vc;
        while(i < n and j < size)
        {
            vc.push_back(a[i]);
            vc.push_back(a[j]);
            i++;
            j++;
        }
        return vc;
    }
};
