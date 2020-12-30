// 69. Sqrt(x)
// Easy

// Implement int sqrt(int x).
// Compute and return the square root of x,
// where x is guaranteed to be a non-negative integer.
// Since the return type is an integer,
// the decimal digits are truncated and only the integer
// part of the result is returned.

// Example 1:
// Input: 4
// Output: 2

// Example 2:
// Input: 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since 
//              the decimal part is truncated, 2 is returned.


// Success
// Runtime: 60 ms, faster than 19.55% of C# online submissions for Sqrt(x).
// Memory Usage: 15.2 MB, less than 7.14% of C# online submissions for Sqrt(x).
public class Solution {
    public int MySqrt(int x) {
        
        int rangeMax = 46340;
        int rangeMin = 0;
        int curTry;
        
        while (true)
        {
            curTry = ((rangeMax - rangeMin) / 2) + rangeMin;
            Console.WriteLine(curTry);
            
            if (
                (Math.Pow(curTry, 2) <= x)
                && (Math.Pow(curTry + 1, 2) > x)) 
            {
                return curTry;
            }
            else if (Math.Pow(curTry, 2) < x) 
            {
                rangeMin = curTry + 1;
            }
            else 
            {
                rangeMax = curTry - 1;
            }
        }
    }
}
