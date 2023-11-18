class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vc;

        for(int i =0  ; i <= n ; i++) {
            int num = i, count = 0;

            while(num != 0) {
                if( num & 1 == 1 ) {
                    count ++;
                }
                num /= 2;
            }

            vc.push_back(count);
        }

        return vc;
    }
};
