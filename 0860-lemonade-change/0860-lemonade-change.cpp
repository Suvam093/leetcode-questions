class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int>freq;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                freq[5]++;
            }else if(bills[i]==10){
                if(freq[5]>=1){
                    freq[5]--;
                    freq[10]++;
                }else{
                    return false;
                }
            }else{
                if(freq[5]>=1 && freq[10]>=1){
                    freq[5] -=1;
                    freq[10]-=1;
                    freq[20]++;
                }
                else if(freq[5]>=3){
                    freq[5]-=3;
                    freq[20]++;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};