class Solution {
public:
    int func (vector<int>&a, int k) {
        int i = 0, j = 0, sum = 0;
        map<int, int> mp;

        if(k <= 0) return 0;

        while(j < a.size()) {
            mp[a[j]]++;

            while(mp.size() > k) {
                mp[a[i]]--;
                if(mp[a[i]] == 0) mp.erase(a[i]);
                i++;
            }

            sum += (j - i + 1);
            j++;
        }

        return sum;
    }

    int subarraysWithKDistinct(vector<int>& a, int k) {
        int x = func(a, k);
        int y = func(a, k - 1);

        return x - y;
    }
};
