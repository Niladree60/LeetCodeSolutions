class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int k) {
        int n= a.size();
        vector<vector<int>> ans;
        if(n < 4)
        {
            return ans;
        }
        sort(a.begin(),a.end());
        for(int i = 0 ; i < n ; i++)
        {
            long long new_target = k - a[i];// first element a[i]
            for(int j = i+1 ; j < n ; j++) // search for other 3 element
            {
                long long new_second_target = new_target - a[j];
                // now search for other two element
                int left = j+1 , right = n-1;
                while(left < right)
                {
                    long long cur_sum = a[left] + a[right];
                    if(cur_sum < new_second_target)
                    {
                        left++;
                    }
                    else if(cur_sum > new_second_target)
                    {
                        right--;
                    }
                    else if(cur_sum == new_second_target)
                    {
                        int three = a[left], four = a[right];
                        ans.push_back({a[i],a[j],a[left],a[right]});
                        // avoid duplication of thirs element
                        while(left < right and a[left] == three)
                        {
                            left++;
                        }
                        // avoid duplication of fourth element
                        while(left < right and a[right] == four)
                        {
                            right--;
                        }
                    }
                }
                // avoid duplication of second element
                while(j+1 < n  and a[j] == a[j+1])
                {
                    j++;
                }
            }
            // avoid duplication of first element
            while(i+1 < n and a[i+1] == a[i])
            {
                i++;
            }
        }
        return ans;
    }
};
