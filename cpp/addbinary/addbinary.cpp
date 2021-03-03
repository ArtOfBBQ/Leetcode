#include <string>
#include <stack>

// Success
// Details 
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Binary.
// Memory Usage: 6.6 MB, less than 59.35% of C++ online submissions for Add Binary.

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        
        std::stack<bool> sums;
        
        int i = 1;
        bool carry = false;
        while (a.size() >= i || b.size() >= i || carry) {
            
            int sum =
                  (b.size() >= i ? (b.at(b.size() - i) == '1') : false)
                  + (a.size() >= i ? (a.at(a.size() - i) == '1') : false)
                  + carry;
            
            sums.push(sum % 2 == 1);
            
            carry = sum > 1;
            i++;
        }
        
        a.resize(sums.size());
        
        for (i = 0; !sums.empty(); i++) {
            a.at(i) = sums.top() ? '1' : '0';
            sums.pop();
        }
        
        return a; 
    }
};

