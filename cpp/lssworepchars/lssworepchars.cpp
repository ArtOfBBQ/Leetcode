// Success
// Details 
// Runtime: 28 ms, faster than 64.73% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 8.6 MB, less than 65.26% of C++ online submissions for Longest Substring Without Repeating Characters.

// Example 1:
// 
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:
// 
// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:
// 
// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
// Example 4:
// 
// Input: s = ""
// Output: 0
//  
// 
// Constraints:
// 
// 0 <= s.length <= 5 * 104 s consists of English letters, digits, symbols and spaces.

#include <string>
#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {

        if (s.size() == 0) { return 0; }
        
        int return_value = 0;
        std::unordered_map<char, int> chars_seen;
        int start_i = 0;
        int cur_i = 0;
        
        while (cur_i < s.size()) {
            if (chars_seen.count(s[cur_i]) > 0
                && chars_seen[s[cur_i]] >= start_i) {
                
                return_value = std::max(cur_i - start_i, return_value);
                start_i = chars_seen[s[cur_i]] + 1;
            }
            
            chars_seen[s[cur_i]] = cur_i;
            cur_i += 1;
        }
 
        return_value = std::max(cur_i - start_i, return_value);
        return return_value;
    }
};

