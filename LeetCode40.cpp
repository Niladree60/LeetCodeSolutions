class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidate, int target) {
        sort(candidate.begin(),candidate.end());
        vector<int> cur;
        vector<vector<int>> result;
        func(candidate, target, 0, 0 , cur, result );
        return result;
    }
private:
    void func(vector<int> &candidate, int target, int sum, int start, vector<int> &cur, vector<vector<int>> &result)
    {
        if(sum == target)
        {
            result.push_back(cur);
            return;
        }
        if(sum > target)
        {
            return ;
        }
        for(int i = start ; i < candidate.size() ; i++)
        {
            if(i > start and candidate[i] == candidate[i-1])
            {
                continue;
            }
            cur.push_back(candidate[i]);
            func(candidate, target, sum + candidate[i] , i +1, cur, result );
            cur.pop_back();
        }
        
    }
};
