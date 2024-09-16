class Solution {
public:
    vector<string> summaryRanges(vector<int> &nums)
{
    int n = nums.size();
    vector<string> ans;

    if(n == 0) {
        return ans;
    }
    long long int start = nums[0];
    long long int end = nums[0];

    for (int i = 1; i < n; i++)
    {
        if ((long long int)nums[i] - end == 1)
        {
            end = nums[i];
        }
        else
        {
            string temp = to_string(start);
            if (start != end)
            {
                temp += +"->" + to_string(end);
            }
            ans.push_back(temp);
            start = nums[i];
            end = nums[i];
        }
    }
    string temp = to_string(start);
    if (start != end)
    {
        temp += +"->" + to_string(end);
    }
    ans.push_back(temp);
    return ans;
}
};