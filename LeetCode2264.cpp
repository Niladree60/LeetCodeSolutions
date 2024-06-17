class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> vc = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};
        
        for(int i = 0 ; i < vc.size() ; i++) {
            string check = vc[i];
            
            for(int j = 0 ; j < num.size() ; j++){
                string original = num.substr(j,3);
                
                if(check == original) {
                    return original;

                }
            }
        }
        return "";
    }
};
