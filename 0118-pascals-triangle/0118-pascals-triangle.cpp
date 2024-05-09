class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        
        for(int i=0;i<numRows;i++){
            vector<int> pair(i+1,1);
            int j=1;
            while(j<i){
                pair[j] = result[i-1][j-1] + result[i-1][j];
                j++;
            }
            result.push_back(pair);
        }
        return result;
    }
};