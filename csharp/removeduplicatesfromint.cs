// 26. Remove Duplicates from Sorted Array
// Easy

// Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Given nums = [1,1,2],

// Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

// It doesn't matter what you leave beyond the returned length.
// Example 2:

// Given nums = [0,0,1,1,1,2,2,3,3,4],

// Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

// It doesn't matter what values are set beyond the returned length.


// Success
// Details 
// Runtime: 244 ms, faster than 89.98% of C# online submissions for Remove Duplicates from Sorted Array.
// Memory Usage: 33.3 MB, less than 5.56% of C# online submissions for Remove Duplicates from Sorted Array.
public class Solution {
    public int RemoveDuplicates(int[] nums) {
        
        if (nums.Length < 2) 
        {
            return nums.Length;
        }
        
        int iWrite = 1;
        for (int iSearch = 1; iSearch < nums.Length; iSearch++) 
        {
            if (nums[iSearch] != nums[iWrite - 1]) 
            {
                nums[iWrite] = nums[iSearch];
                iWrite++;
            }
        }
        
        return iWrite;
    }
}
