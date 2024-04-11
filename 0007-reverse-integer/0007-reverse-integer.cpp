class Solution {
public:
    int reverse(int x) {
        int a=0,temp;
        temp=x;
        while(temp){
            if(a>INT_MAX/10) return 0;
            if(a<INT_MIN/10) return 0;
            a=a*10 +(temp%10);
                temp/=10;
        }
        
        
        return a;
    }
};