/*

The examples shown on leetcode are all with 3 rows like this:

input: PAYPALISHIRING with 3 rows

visual aid:
P   A   H   N
A P L S I I G
Y   I   R

result:
PAHNAPLSIIGYIR


what if that had 4 rows instead?

PAYPALISHIRING

P  L  I
A AI RN
YP SI G
P  H

PLIAAIRNYPSGPH

This seems fairly easy if we just use lots of memory. We can have
a vector of queues and push every single character, then pop them all
into a string
*/

// Success
// 
// Runtime: 40 ms, faster than 21.99% of C++ online submissions for ZigZag Conversion.
// Memory Usage: 56.3 MB, less than 5.42% of C++ online submissions for ZigZag Conversion.
// can't win 'em all I guess :/ let's see how other people did it

#include <string>
#include <queue>
#include <vector>



class Solution {
public:
    std::string convert(std::string s, int numRows) {

        if (numRows == 1 || numRows >= s.size()) { return s; }

        std::vector<std::queue<char>> queues(numRows);
        
        int cur_row = 0;
        bool descending = true;
        
        for (char & cur_char : s) {
            queues.at(cur_row).push(cur_char);
            
            if (descending) {
                cur_row += 1;
                if (cur_row == numRows - 1) {
                    descending = false;
                }
            } else {
                cur_row -= 1;
                if (cur_row == 0) {
                    descending = true;
                }
            }
        }
        
        // it's pretty strange to me that the input string
        // was passed by value and not const. I guess that means
        // we can use it as a return value
        cur_row = 0;
        for (int i = 0; i < s.size(); i++) {
            s[i] = queues.at(cur_row).front();
            queues.at(cur_row).pop();
            
            if (queues.at(cur_row).size() == 0) {
                cur_row += 1;
            }
        }
        
        return s;
    }
};

