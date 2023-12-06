class Solution {
public:
    int singleNumber(vector<int>& a) {
        int result = 0;

        for (int num : a) {
            result ^= num;
        }

        return result;
    }
};
