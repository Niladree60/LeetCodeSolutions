class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        f(nums, 0, result);
        return result;
    }
private:
    void f(vector<int> &nums, int start, vector<vector<int>> &result)
    {
        if(start == nums.size())
        {
            result.push_back(nums);
            return;
        }
        set<int> st;
        for(int i = start ; i < nums.size() ; i++)
        {
            if(st.count(nums[i]) == 1) continue;
            st.insert(nums[i]);
            swap(nums[start] , nums[i]);
            f(nums,start+1,result);
            swap(nums[start] , nums[i]);
        }
    }
};
