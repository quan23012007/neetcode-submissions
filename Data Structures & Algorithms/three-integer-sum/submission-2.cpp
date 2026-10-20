class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int lo = i + 1, hi = nums.size() - 1;
            while ( lo < hi)
            {
                int s = nums[i] + nums[lo] + nums[hi];
                if (s == 0) {
                    result.push_back({nums[i], nums[lo], nums[hi]});
                    lo++;
                    hi--;
                    while (lo < hi && nums[lo] == nums[lo - 1]) lo++;
                    while (lo < hi && nums[hi] == nums[hi + 1]) hi--;
                }
                else if (s < 0) lo ++;
                else
                    hi --;

            }
        }
        return result;
    }
};
