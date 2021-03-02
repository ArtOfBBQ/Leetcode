#include <vector>
#include <algorithm>

// Success
//
// Runtime: 144 ms, faster than 34.13% of C++ online submissions for 3Sum.
// Memory Usage: 20 MB, less than 89.41% of C++ online submissions for 3Sum.


class Solution {
public:
    
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {

        std::vector<std::vector<int>> return_values;

        if (nums.size() < 3) { return return_values; }
        
        std::sort(nums.begin(), nums.end());
        
        int i = 0;
        
        while (i < nums.size()-2) {
            if (i > 0 && nums.at(i-1) == nums.at(i)) {
                i++;
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;
            
            while (j < k) {
                int threesum = nums.at(i) + nums.at(j) + nums.at(k);
                
                if (threesum > 0) {
                    k--;
                    while (nums.at(k) == nums.at(k + 1) && k >= j) {
                        k--;
                    }
                } else if (threesum < 0) {
                    j++;
                    while (nums.at(j) == nums.at(j - 1) && j < k) {
                        j++;
                    }
                } else {
                    return_values.push_back(
                        std::vector<int> {
                            nums.at(i),
                            nums.at(j),
                            nums.at(k)});

                    j++;
                    k--;
                    
                    while (nums.at(k) == nums.at(k + 1)
                           && nums.at(j) == nums.at(j - 1)
                           && k >= j) {
                        j++;
                        k--;
                    }
                }
            }
            
            i++;
        }
        
        return return_values;
    }
};

