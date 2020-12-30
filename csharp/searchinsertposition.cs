// 35. Search Insert Position
// Easy

// Given a sorted array and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.

// You may assume no duplicates in the array.

// Example 1:
// Input: [1,3,5,6], 5
// Output: 2

// Example 2:
// Input: [1,3,5,6], 2
// Output: 1

// Example 3:
// Input: [1,3,5,6], 7
// Output: 4

// Example 4:
// Input: [1,3,5,6], 0
// Output: 0

// Runtime: 92 ms, faster than 78.41% of C# online submissions for Search Insert Position.
// Memory Usage: 24.7 MB, less than 5.26% of C# online submissions for Search Insert Position.
public class Solution {
    
    public int SearchInsert(int[] nums, int target) {
        
        if (nums.Length == 0) { return 0; }
        
        // I feel like this base case is not necessary
        // but for now I can't get it to work without it
        if (nums.Length == 1) 
        {
            if (nums[0] == target) 
            {
                return 0;
            }
            else if (target < nums[0]) 
            {
                return 0;
            }
            else if (target > nums[0]) 
            {
                return 1;
            }
        }
        
        int pivot = nums.Length / 2;
        
        if (nums[pivot] == target) 
        {
            return pivot;
        }
        else if (target < nums[pivot]) 
        {
            return SearchInsert(nums[0..(pivot)], target);    
        }
        else 
        {
            return pivot + 1 + SearchInsert(nums[(pivot+1)..^0], target);
        }
    }
}