class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i = n/2 ; i>=1 ; i--){
            if(n%i==0){
                int round = n/i;//total number of round we can append
                string newstr = "";
                string pt =s.substr(0,i);//create new string with appending
                while(round --){
                    newstr += pt;// append newstr 
                }
                //check for formated newstr equal to original string or not
                if(newstr==s) return true;
            }
        }
        return false;

    }
};