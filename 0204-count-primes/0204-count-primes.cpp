class Solution {
public:
    
    int countPrimes(int n) {

        if(n<2) return 0;
        vector<bool>prime (n,true);
        prime[0] = prime[1]= false;

        int ans=0;
        int j=0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                ans++;
                j=2*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                } 
            }
        }
        return ans;

    }
};