Runtime: 15 ms, faster than 76.38% of C++ online submissions for Two Sum.
Memory Usage: 11 MB, less than 30.11% of C++ online submissions for Two Sum.


//-------------------------Solution in cpp------------------------//



class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;

    for (int i = 0; i < nums.size(); ++i) {
      if (numToIndex.count(target - nums[i]))
        return {numToIndex[target - nums[i]], i};
      numToIndex[nums[i]] = i;
    }

    throw;
  }
};