class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int n = a.size();
        stack<pair<int,int>> stk;
        vector<int> result(n, 0);
        for(int i = 0 ; i < n ; i++)
        {
            int curDay = i;
            int curTemp = a[i];
            while(!stk.empty() and stk.top().first < curTemp)
            {
                int prevTemp = stk.top().first;
                int prevDay = stk.top().second;
                stk.pop();
                result[prevDay] = curDay - prevDay;
            }
            stk.push({curTemp,curDay});
        }
        return result;
    }
};
