class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& p : count) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> res;
        for (int i = bucket.size() - 1; i >= 0; --i) {
            for (int num : bucket[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};