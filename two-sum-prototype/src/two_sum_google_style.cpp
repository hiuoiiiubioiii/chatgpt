#include <unordered_map>
#include <vector>

class Solution {
 public:
  // Returns the indices of the two distinct values whose sum is equal to
  // target. The problem guarantees exactly one valid answer.
  std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen_index_by_value;

    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
      const int current_value = nums[i];
      const int needed_value = target - current_value;

      const auto it = seen_index_by_value.find(needed_value);
      if (it != seen_index_by_value.end()) {
        return {it->second, i};
      }

      seen_index_by_value[current_value] = i;
    }

    return {};
  }

  // Brute-force baseline used for explanation and verification.
  std::vector<int> twoSumBruteForce(const std::vector<int>& nums, int target) {
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
      for (int j = i + 1; j < static_cast<int>(nums.size()); ++j) {
        if (nums[i] + nums[j] == target) {
          return {i, j};
        }
      }
    }

    return {};
  }
};
