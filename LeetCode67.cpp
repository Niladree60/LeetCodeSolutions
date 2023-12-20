class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int i = a.size()-1 , j = b.size()-1, carry = 0;
        
        while(i >= 0 or j >= 0 or carry ) {
            int sum = carry;
            if(i >= 0) {
                sum += a[i]-'0';
                i--;
            }
            if(j >= 0) {
                sum += b[j]-'0';
                j--;
            }

            carry = sum/2;
            res += to_string(sum%2);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
