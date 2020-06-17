// 242. Valid Anagram
// Easy

// Given two strings s and t , write a function to determine if t is an anagram of s.

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false

// Note:
// You may assume the string contains only lowercase alphabets.

// Follow up:
// What if the inputs contain unicode characters? How would you adapt your solution to such case?


// Success
// Runtime: 88 ms, faster than 62.47% of C# online submissions for Valid Anagram.
// Memory Usage: 23.5 MB, less than 99.39% of C# online submissions for Valid Anagram.
public class Solution {
    public bool IsAnagram(string s, string t) {
        
        var lettersUsed = new Dictionary<string, int>();
        
        for (var i = 0; i < s.Length(); i++) 
        {
            if (lettersUsed.containsKey(s[i])) 
            {
                lettersUsed[s[i]] += 1;
            } else 
            {
                lettersUsed.Add(s[i], 1);
            }
        }

        for (i = 0; i < t.Length(); i++) 
        {
            if (lettersUsed.containsKey(t[i])) 
            {
                lettersUsed[t[i]] -= 1;
                if (lettersUsed[t[i]] < 0) { return false; }
            }
            else 
            {
                return false;
            }
        }

        return true;
        
    }
}