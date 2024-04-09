class Solution {
public:
    
    int countPrimes(int n) {

        if(n<2) return 0;
        vector<bool>prime (n,true);
        prime[0] = prime[1]= false;

        int ans=0;
        for(double i=2; i<n; i++){
            if(prime[i]){
                ans++;
                double j=i*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                } 
            }
        }
        return ans;

    }
};