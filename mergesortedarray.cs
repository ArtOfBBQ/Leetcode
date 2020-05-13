// 88. Merge Sorted Array
// Easy

// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

// Note:
// The number of elements initialized in nums1 and nums2 are m and n respectively.
// You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.

// Example:
// Input:
// nums1 = [1,2,3,0,0,0], m = 3
// nums2 = [2,5,6],       n = 3
// Output: [1,2,2,3,5,6]


// Success
// Runtime: 244 ms, faster than 43.01% of C# online submissions for Merge Sorted Array.
// Memory Usage: 30.6 MB, less than 10.00% of C# online submissions for Merge Sorted Array.
public class Solution {
    public void Merge(int[] nums1, int m, int[] nums2, int n) {
        
        int iWrite = n + m - 1;
        n--;
        m--;
        
        
        while (iWrite >= 0) 
        {            
            if (n < 0) 
            {
                while (m >= 0) 
                {
                    nums1[iWrite] = nums1[m];
                    m--;
                    iWrite--;
                }
                return;
            }
            
            if (m < 0) 
            {
                while (n >= 0) 
                {
                    nums1[iWrite] = nums2[n];
                    n--;
                    iWrite--;
                }
                return;
            }
            
            if (nums2[n] > nums1[m]) 
            {
                nums1[iWrite] = nums2[n];
                n--;
            }
            else
            {
                nums1[iWrite] = nums1[m];
                m--;
            }
            
            iWrite--;
        }
    }
}