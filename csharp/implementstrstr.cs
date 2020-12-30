// 28. Implement strStr()
// Easy

// Implement strStr().

// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:
// Input: haystack = "hello", needle = "ll"
// Output: 2

// Example 2:
// Input: haystack = "aaaaa", needle = "bba"
// Output: -1

// For the purpose of this problem, we will return 0 when needle is an empty string.
// This is consistent to C's strstr() and Java's indexOf().


// Success
// Runtime: 72 ms, faster than 87.27% of C# online submissions for Implement strStr().
// Memory Usage: 22.4 MB, less than 6.67% of C# online submissions for Implement strStr().
public class Solution {
    public int StrStr(string haystack, string needle) {
        
        if (needle.Length == 0) { return 0; }
        if (haystack.Length == 0) { return -1; }
        
        int firstConnect = -1;
        
        int j = 0;
        for (int i = 0; i < haystack.Length; i++) 
        {
            if (haystack[i] != needle[j]) 
            {
                j = 0;
                
                // we have to backtrack for e.g. "sip" in mississippi"
                if (firstConnect >= 0) { i = firstConnect; }
                firstConnect = -1;
            }
            else 
            {
                if (j == 0) { firstConnect = i; };
                j++;
                if (j >= needle.Length)
                {
                    return firstConnect;
                }
            }
        }
        
        return -1;
    }
}