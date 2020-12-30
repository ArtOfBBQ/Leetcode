// 1. Two Sum
// Easy

// Given an array of integers, return indices of the two numbers
// such that they add up to a specific target.

// You may assume that each input would have exactly one solution,
// and you may not use the same element twice.

// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].


// Your runtime beats 60.41 % of csharp submissions.
public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        
        Dictionary<int, int> availableValues = new Dictionary<int, int>();

        for (var i = 0; i < nums.Length; i++) 
        {
            var valueNeeded = target - nums[i];
            if (availableValues.ContainsKey(valueNeeded)) 
            {
                return new int[] {i, availableValues[valueNeeded]};
            }
            else
            {
                availableValues[nums[i]] = i;
            }
        }
        
        return new int[] {};
    }
}