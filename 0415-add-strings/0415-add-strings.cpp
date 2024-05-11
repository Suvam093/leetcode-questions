class Solution {
public:

    void result(string& num1, int s1, string& num2, int s2, string& ans, int carry){
        if(s1<0 && s2<0){
            if(carry>0) ans.push_back(carry + '0');
            return;
        }
        
        
        int n1 = (s1>=0?num1[s1] : '0') - '0';
        int n2 = (s2>=0?num2[s2] : '0') - '0';
        int sum = n1 + n2 + carry;
        carry = sum/10;
        if(sum>=10){
            sum %= 10;
        }
       

        result(num1, s1 - 1, num2, s2 - 1, ans ,carry);
         ans.push_back(sum + '0');
    }

    string addStrings(string num1, string num2) {
        string ans="";

        result(num1, num1.size()-1, num2, num2.size()-1, ans,0);
        return ans;
    }
};