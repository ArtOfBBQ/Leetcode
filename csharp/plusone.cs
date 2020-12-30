// 66. Plus One
// Easy

// Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

// The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

// You may assume the integer does not contain any leading zero, except the number 0 itself.

// Example 1:
// Input: [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.

// Example 2:
// Input: [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.



// Well at least I got the correct answer
// I tried to pass array chunks by reference but it seemed
// like I wasn't allowed to
// Let's come back to this after learning a bit
// Success
// Runtime: 252 ms, faster than 9.83% of C# online submissions for Plus One.
// Memory Usage: 29.9 MB, less than 11.54% of C# online submissions for Plus One.
public class Solution {
    public int[] PlusOne(int[] digits) {
                
        if (digits[digits.Length - 1] < 9) 
        {
            digits[digits.Length - 1] += 1;
        }
        else 
        {
            if (digits.Length == 1) 
            {
                var newArray = new int[2];
                newArray[0] = 1;
                newArray[1] = 0;
                return newArray;
            }
            else 
            {
                int[] allButLastDigit = new int[digits.Length - 1];
                for (int j = 0; j < allButLastDigit.Length; j++) 
                {
                    allButLastDigit[j] = digits[j];
                }
                
                int[] newArr = PlusOne(allButLastDigit);
                
                int[] finalArr = new int[newArr.Length + 1];
                newArr.CopyTo(finalArr, 0);
                finalArr[finalArr.Length - 1] = 0;
                return finalArr;
            }
        }
        
        return digits;
    }
}