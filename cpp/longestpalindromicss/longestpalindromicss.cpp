// Example 1:
// 
// Input: s = "babad"
// Output: "bab"
// Note: "aba" is also a valid answer.

// Example 2:
// 
// Input: s = "cbbd"
// Output: "bb"

// Example 3:
// 
// Input: s = "a"
// Output: "a"

// Example 4:
// 
// Input: s = "ac"
// Output: "a"

// Example 5:
// 
// Input: s = "acaaslkajsdflaksjdfoiwueweoiruwdlkfjs"
// Output: "aa"


#include <string>
#include <iostream>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
       
        int longest_pal_start = -1;
        int longest_pal_yet = -1;
        int longest_pal_length = 0;
        
        for (int i = 0; i < s.size() - 1; i++) {
            int cur_pal = longest_pal_radius(s, i, i+1);
            if (cur_pal > longest_pal_yet) {
                longest_pal_yet = cur_pal;
                longest_pal_start = i - cur_pal;
                longest_pal_length = (cur_pal * 2) + 2;
            }
        }
        
        for (int i = 0; i < s.size(); i++) {
            int cur_pal = longest_pal_radius(s, i, i);
            if (cur_pal > longest_pal_yet) {
                longest_pal_yet = cur_pal;
                longest_pal_start = i - cur_pal;
                longest_pal_length = (cur_pal * 2) + 1;
            }
        }
        
        std::cout << s << " had longest_pal_yet: " << longest_pal_yet << ", at start: " << longest_pal_start << std::endl;
        
        return longest_pal_yet > -1 ?
            s.substr(longest_pal_start, longest_pal_length)
            : std::string(""); 
    }
    
// private:
    // check if a palindrome with i and j already set can be
    // expanded outwardly and if so by how much
    // i and j can be set to the same character, in which case you
    // have a palindrome of at least 1
    // it can also be set to neighbors, in which case they are compared
    // and the smallest possible result is 0
    int longest_pal_radius(
        std::string input,
        int center_i,
        int center_j) {
        
        int radius = -1;
        
        while (
            input[center_i] == input[center_j]
            && center_i >= 0
            && center_j < input.size()) {
            
            center_i--;
            center_j++;
            radius++;
        }
        
        return radius;
    }
};

