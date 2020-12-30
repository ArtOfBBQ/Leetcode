// 7. Reverse Integer
// Easy

// Given a 32-bit signed integer, reverse digits of an integer.

// Example 1:
// Input: 123
// Output: 321

// Example 2:
// Input: -123
// Output: -321

// Example 3:
// Input: 120
// Output: 21

// Note:
// Assume we are dealing with an environment which could only store integers within the 32-bit
// signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function
// returns 0 when the reversed integer overflows.



// Success
// Details 
// Runtime: 44 ms, faster than 60.31% of C# online submissions for Reverse Integer.
// Memory Usage: 15.1 MB, less than 8.33% of C# online submissions for Reverse Integer.
public class Solution {
    public int Reverse(int x) {
        
        // int multiplier = 10;
        // int[] 
        
        // if (x / multiplier >= 1) 
        string original = x.ToString();
        string outputstr = "";
        int output;
        
        for (var i = original.Length - 1; i >= 0; i--)
        {
            outputstr += original[i];
        }
        
        if (outputstr[outputstr.Length - 1] == '-') 
        {
            outputstr = outputstr[outputstr.Length - 1] 
                + outputstr.Substring(0, outputstr.Length - 1);
        }
        
        Int32.TryParse(outputstr, out output);
        
        Console.WriteLine(outputstr);
        return output;
    }
}