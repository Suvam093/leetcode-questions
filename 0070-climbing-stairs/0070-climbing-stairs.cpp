class Solution {
public:
    int climbStairs(int n) {
        int a=2,b=3;
        if(n<4)    return n;
        
        int count = 3;
        int sum=0;
        while(count<n){
            sum = a + b;
            b = sum;
            a = sum - a;
            count++;
        }
        return sum;
    }
};