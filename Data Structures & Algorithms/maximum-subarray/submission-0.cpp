class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxEnd = nums[0];
        long long maxFar = nums[0];
        for (int i = 1; i < nums.size() ; i++)
        {
            maxEnd = max((long long ) nums[i] , maxEnd + nums[i]);
            maxFar = max (maxEnd, maxFar);
        }
        return maxFar;
    }
};
