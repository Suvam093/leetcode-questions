class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        int a = abs(n);
        while(a>0){
            if(a&1) ans*=x;
            x = x*x;
            a>>=1;
        }
        if(n<0) ans=1/ans;
        return ans;
    }
};