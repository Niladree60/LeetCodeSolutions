class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 0;
        set<int> st;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(!st.count(nums[i])) {
                nums[x++] = nums[i];
            }
            st.insert(nums[i]);
        }
        return x;
    }
};
