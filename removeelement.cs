// 27. Remove Element
// Easy

// Given an array nums and a value val,
// remove all instances of that value in-place and return the new length.

// Do not allocate extra space for another array,
// you must do this by modifying the input array in-place with O(1) extra memory.

// The order of elements can be changed. It doesn't matter what
// you leave beyond the new length.

// Example 1:

// Given nums = [3,2,2,3], val = 3,

// Your function should return length = 2, with the first two elements of nums being 2.

// It doesn't matter what you leave beyond the returned length.
// Example 2:

// Given nums = [0,1,2,2,3,0,4,2], val = 2,

// Your function should return length = 5, with the first five elements of nums
// containing 0, 1, 3, 0, and 4.

// Note that the order of those five elements can be arbitrary.

// It doesn't matter what values are set beyond the returned length.

// Success
// Runtime: 232 ms, faster than 93.33% of C# online submissions for Remove Element.
// Memory Usage: 30.1 MB, less than 11.11% of C# online submissions for Remove Element.
public class Solution {
    public int RemoveElement(int[] nums, int val) {
        
        if (nums.Length < 1) 
        {
            return nums.Length;
        }
        
        int iWrite = 0;
        for (int iSearch = 0; iSearch < nums.Length; iSearch++) 
        {
            if (nums[iSearch] != val) 
            {
                nums[iWrite] = nums[iSearch];
                iWrite++;
            }
        }
        
        return iWrite;
    }
}