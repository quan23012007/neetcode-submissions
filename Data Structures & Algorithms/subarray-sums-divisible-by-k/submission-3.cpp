class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<long long, long long> map;
        long long cur = 0 , ans = 0;
        map[0] = 1; // prefix 
        for (int i = 0 ; i < nums.size() ; i++)
        {
            cur += nums[i];
            auto it = map.find(cur % k);
            if (it != map.end())
            ans += it->second;
            map[cur % k]++;
        }
        return ans;
    }
};
