class Solution {
public:
    int trap(vector<int>& height) {
        int maxi = 0;
        int index = 0;
        for(int i=0; i<height.size(); i++){
            if(height[i] > maxi){
                maxi = height[i];
                index = i;
            }
        }
        int i = 0, j = i+1;
        int sum = 0;
        while(j<=index){
            if(height[j]<height[i]){
                sum = sum + height[i] - height[j];
                j++;
            }
            if(height[j] >= height[i]){
                i = j;
                j = i+1;
            }
        }
        int a = height.size()-1;
        int b = a - 1;
        while(b >= index){
            if(height[b]<height[a]){
                sum = sum + height[a] - height[b];
                b--;
            }
            if(height[b] >= height[a]){
                a = b;
                b = a-1;
            }
        }
        return sum;
    }
};