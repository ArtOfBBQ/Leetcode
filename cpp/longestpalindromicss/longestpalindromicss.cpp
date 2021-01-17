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

class Solution {
public:
    std::string longestPalindrome(std::string s) {
       
        unsigned long long longest_pal_start = 0;
        unsigned long long longest_pal_yet = 0;
        unsigned long long longest_pal_length = 0;
        
        for (unsigned long long i = 0; i < s.size() - 1; i++) {
            unsigned long long cur_pal = longest_pal_radius(s, i, i+1);
            if (cur_pal >= longest_pal_length) {
                longest_pal_yet = cur_pal;
                longest_pal_start = i - (cur_pal - 1);
                longest_pal_length = ((cur_pal - 1) * 2) + 2;
            }
        }
        
        for (unsigned long long i = 0; i < s.size(); i++) {
            unsigned long long cur_pal = longest_pal_radius(s, i, i);
            if (cur_pal >= longest_pal_length) {
                longest_pal_yet = cur_pal;
                longest_pal_start = i - (cur_pal - 1);
                longest_pal_length = ((cur_pal - 1) * 2) + 1;
            }
        }
        
        return 
            s.substr(longest_pal_start, longest_pal_length);
    }
    
// private:
    // check if a palindrome with i and j already set can be
    // expanded outwardly and if so by how much
    // i and j can be set to the same character, in which case you
    // have a palindrome of at least 1
    // it can also be set to neighbors, in which case they are compared
    // and the smallest possible result is 0
    unsigned long long longest_pal_radius(
        
        std::string input,
        unsigned long long center_i,
        unsigned long long center_j) {
        
        unsigned long long radius = 0;
        
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

