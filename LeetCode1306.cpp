class Solution {
public:
    bool canReach(vector<int>& a, int start) {
        queue<int> q;
        q.push(start);

        while(!q.empty()) {
            int font = q.front();
            q.pop();

            if(a[font] ==  0) return true;
            if(a[font] < 0 ) continue;

            if(font + a[font] < a.size()) {
                q.push(font+a[font]);
            }

            if(font - a[font]  >= 0) {
                q.push(font-a[font]);
            }

            a[font] = -a[font];
        }
        
        return false;
    }
};
