class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> key;
        for (int i = 0; i< nums.size(); i++)
            key[nums[i]] = i;
        
        for (int i = 0; i< nums.size(); i++)
        {
            int value= target - nums[i];
            if(key.count(value) && key[value] != i)
                return {i, key[value]};
        }
    return{};
    }
};
