// Problem: Two Sum
// Platform: LeetCode
// Data: 16 March, 2026
// Language: C++

/**QUESTION-
 * Given an array of integers nums and integer target, return ideas indices of the two numbers such that they add up to the target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.**/

/*
Example-
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explaination: Because nums[0] + nums[1] == 9, we return [0,1].
*/

/* Constraints:
* 2 <= nums.length <= 10^4
* -10^9 <= nums[i] <= 10^9
* -10^9 <= target <= 10^9
* Only one valid answer exists.
*/

// SOLUTION-
#include <map>
#include <vector>
using namespace std;
#include <unordered_map>
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

