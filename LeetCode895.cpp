class FreqStack {
    int pos = 0;
    priority_queue<pair<int, pair<int, int>>> pq;
    map<int, int> mp;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        pq.emplace(++mp[val], make_pair(++pos, val));
    }
    
    int pop() {
        auto top = pq.top();
        pq.pop();
        int x = top.second.second;
        mp[x]--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
