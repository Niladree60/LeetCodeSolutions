class Solution {
public:
    int buyChoco(vector<int>& a, int money) {
        sort(a.begin(),a.end());
        int x = a[0]+a[1];

        if(x <= money) return money - x;
        else return money;
    }
};
