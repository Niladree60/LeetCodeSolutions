class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int n = a.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int x : a) {
            pq.push(x);
        }
        
        while(n > k) {
            pq.pop();
            n--;
        }

        return pq.top();
    }
};
