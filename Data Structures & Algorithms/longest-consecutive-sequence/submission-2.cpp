class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for (int num : numSet)
        {
            // kiem tra num - 1 ton tai trong numSet k neu k thi no la so dau tien
            if(numSet.find(num - 1) == numSet.end()){
                int length = 1;
                // kiem tra so tiep theo co ton tai?
                while(numSet.find(num+length)!=numSet.end()){ 
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;

    }
};
