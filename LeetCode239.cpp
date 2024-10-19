class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        priority_queue<pair<int, int>> pq;
        vector<int> ans;

        for(int i = 0 ; i < a.size() ; i++) {
            pq.push(make_pair(a[i], i));

            if(i < k - 1) continue;

            while(pq.top().second < i - k + 1) {
                pq.pop();
            }

            ans.push_back(pq.top().first);
        }

        return ans;
    }
};
