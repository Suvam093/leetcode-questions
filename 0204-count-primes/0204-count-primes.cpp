class Solution {
public:
    
    int countPrimes(int n) {

        if(n<2) return 0;
        vector<bool>prime (n,true);
        prime[0] = prime[1]= false;

        int ans=0;
        for(double i=2; i*i<=n; i++){
            if(prime[i]){
                double j=i*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                } 
            }
        }
        for(int i=0; i<n; i++)
            if(prime[i]) ans++;
        
        return ans;

    }
};