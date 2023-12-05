class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> result;
        f(nums,0,temp, result);
        return result;
    }
    
private:
    void f(vector<int> &nums, int start, vector<int> &temp, vector<vector<int>> &result)
    {
        result.push_back(temp);
        for(int i = start ; i < nums.size() ; i++)
        {
            if(i > start and nums[i] == nums[i-1])
            {
                continue;
            }
            temp.push_back(nums[i]);
            f(nums,i+1,temp, result);
            temp.pop_back();
        }
    }
};
