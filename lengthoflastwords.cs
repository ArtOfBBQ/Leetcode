// Easy

// Given a string s consists of upper/lower-case alphabets and empty space characters ' ',
// return the length of last word (last word means the last appearing word if we loop from left to right) in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a maximal substring consisting of non-space characters only.

// Example:
// Input: "Hello World"
// Output: 5


// Success
// Details 
// Runtime: 68 ms, faster than 96.04% of C# online submissions for Length of Last Word.
// Memory Usage: 22.1 MB, less than 7.14% of C# online submissions for Length of Last Word.
public class Solution {
    public int LengthOfLastWord(string s) {
        
        if (s.Length == 0) { return 0; }
        
        int curTotal = 0;
        for (int i = s.Length - 1; i >= 0; i--) 
        {
            if (s[i] == ' ')
            {
                if (curTotal > 0)
                {
                    return curTotal;
                }
            }
            else 
            {
                curTotal += 1;
            }
        }
        
        return curTotal;
    }
}