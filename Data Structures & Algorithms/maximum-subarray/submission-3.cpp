class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max_sum = nums[0];
       int cur_num =  0;
       for (auto it : nums)
       {
        cur_num = max(it , cur_num  +it);
        max_sum = max(max_sum, cur_num);
       }
       return max_sum;
    }
};
