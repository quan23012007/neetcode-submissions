class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<long long, long long> map;
        long long cur = 0 , ans = 0;
        map[0] = 1; // prefix 
        for (int i = 0 ; i < nums.size() ; i++)
        {
            cur += nums[i];
            cur = ((cur % k)+k)%k;
            cout << cur << "\n";
            ans += map[cur];
            cout << ans << "\n";
            map[cur]++;
            cout << cur <<"\n";
        }
        return ans;
    }
};
