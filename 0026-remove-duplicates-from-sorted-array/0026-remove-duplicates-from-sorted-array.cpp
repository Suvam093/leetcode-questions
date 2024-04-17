class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j=0;
        vector<int> ans;
        int a = nums.size();
        ans.push_back(nums[0]);
        for(int i=1; i<a; i++){
            if(ans[j] != nums[i]){
                ans.push_back(nums[i]);
                j++;
            }
        }
        nums =ans;
        return nums.size();
        
    }
};