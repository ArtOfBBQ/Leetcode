/*
So I think this will be middle-out (like on Silicon Valley!) in
two ways:
1. Each time we set the iterators, we'll check if there's a palindrome
there by moving to the outside and checking if the characters match
2. The iterators themselves will start in the center, where the longest
potential palindrome is. We'll then slowly move them off center and
keep searching as long as bigger palindromes are stil possible


Below I literally drew a picture for myself of the ideal (i guess)
iteration behavior 


1/1 rank 1 pointer placements (could yield 7-length palindrome):
[        *       *        ]
'a','b','c','d','e','f','g'

1/2 rank 2 pointer placements (could yield 6-length palindrome):
[        *   *        ] 
'a','b','c','d','e','f','g'

2/2 rank 2 pointer placements (could yield 6-length palindrome):
    [        *   *        ]
'a','b','c','d','e','f','g'

1/2 rank 3 pointer placements (could yield 5-length palindrome):
[    *       *     ]
'a','b','c','d','e','f','g'

1/2 rank 3 pointer placements (could yield 5-length palindrome):
        [    *       *    ]
'a','b','c','d','e','f','g'

1/2 rank 4 pointer placements (could yield 4-length palindrome)
[    *   *    ] 
'a','b','c','d','e','f','g'

2/2 rank 4 pointer placements (could yield 4-length palindrome)
            [    *   *    ]
'a','b','c','d','e','f','g'

1/2 rank 5 pointer placements (could yield 3-length palindrome)
[*       *] 
'a','b','c','d','e','f','g'

2/2 rank 5 pointer placements (could yield 3-length palindrome)
                [*       *]
'a','b','c','d','e','f','g'

1/2 rank 6 pointer placements (could yield 2-length palindrome)
[*   *]
'a','b','c','d','e','f','g'

2/2 rank 6 pointer placements (could yield 2-length palindrome)
                    [*   *]
'a','b','c','d','e','f','g'

If we still haven't found a 2-length palindrome, we now have to look
for a 1-length one, but that doesn't require any iterating - we can
just return the first character and call it a palindrome
*/


// Success
// Runtime: 4 ms, faster than 99.53% of C++ online submissions
// for Longest Palindromic Substring.
// Memory Usage: 7.1 MB, less than 81.84% of C++ online submissions
// for Longest Palindromic Substring.

#include <string>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        
        // leetcode says the string will always be size > 0,
        // so this check isn't necessary
        // if (s.size() == 0) { return ""; }
        
        int longest_possible_palindrome = s.size();
        
        int i = s.size() / 2 - 1;
        int j = s.size() - i - 1;
        
        int longest_pal_found = 0;
        int longest_pal_start = -1;
        
        int left_offset = 0;
        int right_offset = 0;
        
        while (longest_possible_palindrome > 1
               && longest_possible_palindrome > longest_pal_found) {
           
            int cur_pal_size = longestPalindromeOutside(s, i, j);
            if (cur_pal_size > longest_pal_found) {
                longest_pal_found = cur_pal_size;
                longest_pal_start = i + 1 - (longest_pal_found / 2);
            }
           
            // move the iterators i and j
            // this makes sure we always look for the longest potential
            // palindrome first.
            // e.g. if we have a 5-character string [0,1,2,3,4]
            // we start by putting the iterators on 1 & 3,
            // hoping for a 5-length palindrome.
            //
            // in the next step, we set the iterators i and j
            // to 1 & 2, hoping for a 4-length palindrome.
            //
            // next, we set them to 2 & 3, again hoping for a 4-length
            // palindrome, etc.
            if (right_offset == 0) {
                right_offset = left_offset + 1;  
                left_offset = 0;
                longest_possible_palindrome -= 1;
            } else {
                left_offset = right_offset;
                right_offset = 0;
            }

            i = ((s.size() - left_offset - right_offset) / 2) - 1 + left_offset;
            j = i + ((s.size() - left_offset - right_offset) % 2 == 0 ? 1 : 2);
        }
        
        if (longest_pal_found < 2) {
            return s.substr(0, 1);
        }
        
        return s.substr(longest_pal_start, longest_pal_found);
    }
private:
    int longestPalindromeOutside(const std::string & s, int i, int j) {
        
        while (i >= 0 && j < s.size() && s[i] == s[j]) {
            i--;
            j++;
        }
        
        return j - i - 1;
    }
};

