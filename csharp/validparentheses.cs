// 20. Valid Parentheses
// Easy

// Given a string containing just the characters '(', ')', '{', '}', '[' and ']'
// , determine if the input string is valid.

// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Note that an empty string is also considered valid.

// Example 1:
// Input: "()"
// Output: true

// Example 2:
// Input: "()[]{}"
// Output: true

// Example 3:
// Input: "(]"
// Output: false

// Example 4:
// Input: "([)]"
// Output: false

// Example 5:
// Input: "{[]}"
// Output: true


// Runtime: 72 ms, faster than 85.61% of C# online submissions for Valid Parentheses.
// Memory Usage: 22.1 MB, less than 6.38% of C# online submissions for Valid Parentheses
public class Solution {
    public bool IsValid(string s) {
        
        if (s == null) { return false; }
        if (String.IsNullOrEmpty(s)) { return true; }
        
        Dictionary<Char, Char> ClosingBracket = new Dictionary<Char, Char> {
            {'(', ')'},
            {')', '('},
            {'{', '}'},
            {'}', '{'},
            {'[', ']'},
            {']', '['}
        };
        
        // Put newly discovered brackets on top of this stack
        // and pop them off when we discover a closing bracket
        // of the same type
        Stack<Char> BracketsSeen = new Stack<Char>();
        
        // I want to be able to Peek
        // without checking for errors inside the loop over & over
        // so I need any initial value
        BracketsSeen.Push('S');

        // For holding the matching type to the top bracket on the stack
        Char oppositeOfTopOfStack;
        
        for (int i = 0; i < s.Length; i++)
        {
            // Prevent dictionary from throwing by providing
            // a default value
            oppositeOfTopOfStack = 'X';
            ClosingBracket.TryGetValue(s[i], out oppositeOfTopOfStack);
            
            if (BracketsSeen.Peek() == oppositeOfTopOfStack)
            {
                BracketsSeen.Pop();
            }
            else 
            {
                BracketsSeen.Push(s[i]);
            }
        }
        
        if (BracketsSeen.Count == 1) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}
