class Solution {
public:
    vector<int> addToArrayForm(vector<int>&a, int k) {
        vector<int> vc,ans;

        while(k)
        {
            vc.push_back(k%10);
            k /= 10;
        }

        reverse(vc.begin(),vc.end());
        int i = a.size() -1 , j = vc.size() - 1 , carry = 0 , sum = 0;

        while(i >= 0 or j >= 0)
        {
            sum = carry;

            if(i >= 0)
            {
                sum += a[i--];
            }

            if(j >= 0)
            {
                sum += vc[j--];
            }
            carry = sum / 10;
            ans.push_back(sum % 10);
        }
        if(carry)
        {
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};
