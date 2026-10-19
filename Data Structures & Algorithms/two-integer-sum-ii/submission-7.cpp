class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int , int > seen;
        for (int i =  0 ;i < numbers.size() ; i++)
        {
            int res = target - numbers[i];
            if (seen.count(res))
            {
                return {seen[res], i +1};
            }
            seen[numbers[i]] = i +1 ;
        }
        return {};
    }
};
