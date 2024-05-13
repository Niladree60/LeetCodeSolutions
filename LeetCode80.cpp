class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int j = 1;
        for(int i = 1 ; i < a.size() ; i++) {
            if(j==1 or a[i] != a[j-2]) {
                a[j++] = a[i];
            }
        }
        return j;
    }
};
