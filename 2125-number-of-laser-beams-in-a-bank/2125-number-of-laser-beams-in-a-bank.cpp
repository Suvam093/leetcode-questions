class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ones;
        int count;
        int ans=0;
        for(auto ch:bank){
            count = 0;
            for(int i=0; i<ch.size();i++){
                if(ch[i]=='1') count++;
                
            }
            if(count>0) ones.push_back(count);
        }
        if(ones.size()<2) return 0;
        for(int i=0; i<ones.size()-1; i++){
            ans = ans + ones[i]*ones[i+1];
        }
        return ans;
    }
};