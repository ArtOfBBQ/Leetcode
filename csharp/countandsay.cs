// 38. Count and Say
// Easy

// The count-and-say sequence is the sequence of integers with the first five terms as following:

// 1.     1
// 2.     11
// 3.     21
// 4.     1211
// 5.     111221
// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.

// Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. You can do so recursively, in other words from the previous member read off the digits, counting the number of digits in groups of the same digit.

// Note: Each term of the sequence of integers will be represented as a string.

 

// Example 1:
// Input: 1
// Output: "1"
// Explanation: This is the base case.

// Example 2:
// Input: 4
// Output: "1211"
// Explanation: For n = 3 the term was "21" in which we have two groups "2" and "1", "2" can be read as "12" which means frequency = 1 and value = 2, the same way "1" is read as "11", so the answer is the concatenation of "12" and "11" which is "1211".


// Runtime: 88 ms, faster than 50.59% of C# online submissions for Count and Say.
// Memory Usage: 31.4 MB, less than 6.25% of C# online submissions for Count and Say.
public class Solution {
    public string CountAndSay(int n) {
        
        if (n < 2) 
        {
            return "1";
        }
        
        string previousOut = CountAndSay(n - 1);
        // if this is "111221"
        // we're going for "312211"
        
        int i = 0;
        int consecutiveHits = 1;
        string newOut = "";
        for (i = 0; i < previousOut.Length; i++) 
        {
            if (i < previousOut.Length - 1 && previousOut[i] == previousOut[i + 1])  
            {
                consecutiveHits += 1;
            }
            else 
            {
                newOut += consecutiveHits.ToString();
                
                newOut += previousOut[i];
                
                consecutiveHits = 1;
            }
        }
        
        return newOut;
    }
}