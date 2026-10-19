class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int , int > seen;
        for (int i =  0 ;i < numbers.size() ; i++)
        {
            int res = target - numbers[i];
            auto it = seen.find(res);
            if (it !=seen.end())
            {
                return {it->second, i +1};
            }
            seen[numbers[i]] = i+ 1;
        }
        return {};
    }
};
