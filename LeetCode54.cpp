class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int top = 0 , left = 0 , right = a[0].size()-1 , bottom = a.size()-1;
        vector<int> res;
        while(top <= bottom and left <= right)
        {
            for(int i = top ; i <= right ; i++)
            {
                res.push_back(a[top][i]);
            }
            top++;
            for(int i = top ; i <= bottom ; i++)
            {
                res.push_back(a[i][right]);
            }
            right--;
            if(top <= bottom)
            {
                for(int i = right ; i >= left ; i --)
                {
                    res.push_back(a[bottom][i]);
                }
                bottom--;
            }
            if(left <= right)
            {
                for(int i = bottom ; i >= top ; i--)
                {
                    res.push_back(a[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};
