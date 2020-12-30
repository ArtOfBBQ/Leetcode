// 53. Maximum Subarray
// Easy

// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// Example:
// Input: [-2,1,-3,4,-1,2,1,-5,4],
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

// Follow up:
// If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

// Success
// Runtime: 96 ms, faster than 72.11% of C# online submissions for Maximum Subarray.
// Memory Usage: 25.3 MB, less than 10.00% of C# online submissions for Maximum Subarray.
public class Solution {
    public int MaxSubArray(int[] nums) {
        
        if (nums.Length == 0) { return -2147483648; }
        
        int highTotal = nums[0];
        int total = 0;
        int i = 0;
        
        
        
        for (i = 0; i < nums.Length; i++) 
        {
            if (nums[i] + total >= 0 && total > 0) 
            {
                total += nums[i];
            }
            else 
            {
                total = nums[i];
            }
            
            if (total > highTotal)
            {
                highTotal = total;
            }
        }
        
        return highTotal;
    }
}