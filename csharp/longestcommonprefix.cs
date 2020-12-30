// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:
// Input: ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

// Note:
// All given inputs are in lowercase letters a-z.


// Success
// Details 
// Runtime: 96 ms, faster than 92.52% of C# online submissions for Longest Common Prefix.
// Memory Usage: 24.4 MB, less than 5.26% of C# online submissions for Longest Common Prefix.
public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        
        if (strs.Length == 0) { return ""; }
        if (strs.Length == 1) { return strs[0]; }
        if (strs[0].Length == 0) { return ""; }

        string output = "";

        int i = 0;
        char curchar = ' ';
        while (true)
        {
            int j = 0;
            if (strs[j].Length <= i) { return output; } else { curchar = strs[j][i]; }
            
            for (j = 1; j < strs.Length; j++) 
            {
                if (i >= strs[j].Length
                   || strs[j][i] != curchar) 
                {
                    return output;
                }
            }
            output += curchar;
            i++;
        }

        return output;
    }
}
