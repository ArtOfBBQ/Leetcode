// 9. Palindrome Number
// Easy

// Determine whether an integer is a palindrome.
// An integer is a palindrome when it reads the same backward as forward.

// Example 1:
// Input: 121
// Output: true

// Example 2:
// Input: -121
// Output: false
// Explanation: From left to right, it reads -121.
// From right to left, it becomes 121-.
// Therefore it is not a palindrome.

// Example 3:
// Input: 10
// Output: false
// Explanation: Reads 01 from right to left.
// Therefore it is not a palindrome.

// Follow up:
// Coud you solve it without converting the integer to a string?



// Trying this first with strings

// Runtime: 72 ms, faster than 39.23% of C# online submissions for Palindrome Number.
// Memory Usage: 16.4 MB, less than 15.00% of C# online submissions for Palindrome Number.
// actually not as bad as I thought
public class Solution {
    public bool IsPalindrome(int x) {
        string xstr = x.ToString();
        
        int i = 0;
        int j = xstr.Length - 1;
        
        while (i < j) 
        {
            if (xstr[i] == xstr[j]) 
            {
                i++;
                j--;
            }
            else 
            {
                return false;
            }
        }
        
        return true;
    }
}

// Let's try without strings

// Runtime: 64 ms, faster than 72.58% of C# online submissions for Palindrome Number.
// Memory Usage: 19.4 MB, less than 5.00% of C# online submissions for Palindrome Number.
public class Solution {
    public bool IsPalindrome(int x) {
        
        if (x < 0) { return false; }
        
        // we re-write our number as an array of single-digit numbers
        var numbersAsList = new List<int>();
        while (x >= 1) 
        {
            var rightMostNumber = x  % 10;
            x = x / 10;
            numbersAsList.Add(rightMostNumber);
        }
                        
        // now we can compare the digits directly
        int i = 0;
        int j = numbersAsList.Count() - 1;
        while (i < j) 
        {
            if (numbersAsList[i] != numbersAsList[j]) 
            {
                return false;
            }
            else 
            {
                i++;
                j--;
            }
        }
        
        return true;
    }
}