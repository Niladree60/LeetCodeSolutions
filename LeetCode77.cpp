class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> temp;
        func(result,temp,1,n,k);
        return result;
    }
private :
    void func(vector<vector<int>> &result, vector<int> &temp, int index, int n, int k)
    {
        if(temp.size() == k)
        {
            result.push_back(temp);
            return ;
        }
        for(int i =  index ; i <= n   ; i++)
        {
            temp.push_back(i);
            func(result,temp,i+1,n,k);
            temp.pop_back();
        }
    }
};
