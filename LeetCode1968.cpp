class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        sort(a.begin(), a.end());
        int i = 0, j = a.size() -1;
        vector<int> vc;
        while(i <= j) {
            if(i == j) {
                vc.push_back(a[i]);
                break;
            }
            else {
                vc.push_back(a[i]);
                vc.push_back(a[j]);
                i++;
                j--;
            }
        }
        return vc;
    }
};
