class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0, left = 0, bottom = n-1 , right = n -1 ;
        vector<vector<int>> vc(n,vector<int>(n,0));
        int element = 1;
        while(top <= bottom and left <= right)
        {
            
                for(int i = left ; i <= right ; i++)
                {
                    vc[top][i] = element;
                    element++;
                }
                top++;
            
                for(int i = top ; i <= bottom ; i++)
                {
                    vc[i][right] = element;
                    element++;
                }
                right--;
            
            if(left <= right)
            {
                for(int i = right ; i >= left ; i--)
                {
                    vc[bottom][i] = element;
                    element++;
                }
                bottom--;
            }
            if(top <= bottom)
            {
                for(int i = bottom ; i >= top ; i--)
                {
                    vc[i][left] = element;
                    element++;
                }
                left++;
            }
        }
        vector<vector<int>> ans;
        for(int i = 0 ; i < n  ;i ++)
        {
            vector<int> temp;
            for(int j = 0 ; j < n ; j++)
            {
                temp.push_back(vc[i][j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
