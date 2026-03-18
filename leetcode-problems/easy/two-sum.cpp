// Problem: Two Sum
// Platform: LeetCode
// Date: 16 March, 2026
// Language: C++
// Tags: Array, Hashmap
// Pattern: Hashmap lookup (complement search)

/**QUESTION-
 * Given an array of integers nums and integer target, return indices of the two numbers such that they add up to the target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.**/

/*
Example-
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0,1].
*/

/* Constraints:
* 2 <= nums.length <= 10^4
* -10^9 <= nums[i] <= 10^9
* -10^9 <= target <= 10^9
* Only one valid answer exists.
*/

// Intuition:
// Instead of checking every pair (O(n^2)),
// We use a hashmap to store visited elements.
// This allows us to find the complement quickly.

// Approach:
// 1. Create a hashmap (value -> index)
// 2. Loop through the array
// 3. Calculate complement = target - nums[i]
// 4. If complement exists in map → return indices
// 5. Else store current element

// Complexity:
// Time Complexity: O(n)
// Space Complexity: O(n)

// SOLUTION-
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
    public:
       vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> mp; // value, index
            
            for (int i=0 ; i<nums.size(); i++) {
                int complement = target - nums[i];
                
                if (mp.find(complement) != mp.end()) {
                    return {mp[complement], i};
                }
                mp[nums[i]] = i;
            }
            return {};
          }
};

