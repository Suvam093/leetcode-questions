class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0;
        int r = nums.size()-1;
        int temp=0;
        while(m<=r){
            if(nums[m]==0) swap(nums[m++],nums[l++]);
            
            else if(nums[m]==1) m++;

            else swap(nums[m],nums[r--]);
        }
    
    }
};