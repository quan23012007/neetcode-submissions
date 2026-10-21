class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, long long> count;
        long long cur = 0, ans = 0;
        count[0] = 1;
        for (int i = 0 ;i < nums.size() ; i++)
        {
            cur +=nums[i];
            auto it = count.find(cur - k);
            if (it != count.end())
                ans += it->second;
            count[cur]++;
        }
        return ans;
    }
};