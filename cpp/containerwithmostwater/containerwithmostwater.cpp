// Success
// 
// Runtime: 44 ms
//   faster than 20.12% of C++ online submissions
//   for Container With Most Water.
// Memory Usage: 17.7 MB
//   less than 95.42% of C++ online submissions
//   for Container With Most Water.


class Solution {
public:
    int maxArea(vector<int>& height) {
        
        unsigned int i = 0;
        unsigned int j = height.size() - 1;
        int return_value = getAreaAt(height, i, j);
        
        while (i < j) {
            if (height[i] < height[j]) {
                i++;
                if (height[i] <= height[i - 1]) {
                    continue;
                }
            } else {
                j--;
                if (height[j] <= height[j + 1]) {
                    continue;
                }
            }
            
            int newArea = getAreaAt(height, i, j);
            if (newArea > return_value) { return_value = newArea; }
        }
        
        return return_value;   
    }
private:
    int getAreaAt(
        const vector<int>& height,
        const unsigned int i,
        const unsigned int j) const {
        
        return std::min(height[i], height[j]) * (j - i);
    }
};

