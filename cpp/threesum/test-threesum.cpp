#define CATCH_CONFIG_MAIN

#include "../catch.hpp"

#include <vector>
#include <algorithm>

#include "threesum.cpp"

TEST_CASE("Example 1")
{
    // Input: nums = [-1,0,1,2,-1,-4]
    // Output: [[-1,-1,2],[-1,0,1]]

    std::vector<int> input = {-2, 0, 1, 1, 2, 4};
    
    Solution sl;
    
    std::vector<std::vector<int>> result = sl.threeSum(input);
    
    REQUIRE(result.size() > 0);
    REQUIRE(result[0].size() > 1);
    REQUIRE(result[0][0] == -2);
    REQUIRE(result[0][1] == 0);
    REQUIRE(result[0][2] == 2);

    REQUIRE(result[1][0] == -2);
    REQUIRE(result[1][1] == 1);
    REQUIRE(result[1][2] == 1);
}

TEST_CASE("Example 2")
{
    // Input: nums = [-1,0,1,2,-1,-4]
    // Output: [[-1,-1,2],[-1,0,1]]

    std::vector<int> input = {-2, 0, 1, 1, 2, -4};
    
    Solution sl;
    
    std::vector<std::vector<int>> result = sl.threeSum(input);
    
    REQUIRE(result.size() > 0);
    REQUIRE(result[0].size() > 0);
}

TEST_CASE("When duplicates on the left are needed")
{
    std::vector<int> input = {-1,0,1,2,-1,-4};
    
    Solution sl;
    
    std::vector<std::vector<int>> result = sl.threeSum(input);
    
    // expected output is:
    // [[-1,-1,2],[-1,0,1]]
    REQUIRE(result.size() > 0);
    REQUIRE(result[0].size() > 0);
    REQUIRE(result[0][0] == -1);
    REQUIRE(result[0][1] == -1);
    REQUIRE(result[0][2] == 2);
    REQUIRE(result[1][0] == -1);
    REQUIRE(result[1][1] == 0);
    REQUIRE(result[1][2] == 1);
}

TEST_CASE("With many duplicates")
{
    std::vector<int> input = {-2,0,0,2,2};
    
    Solution sl;
    
    std::vector<std::vector<int>> result = sl.threeSum(input);
    
    // expected output is:
    // [[-2,0,2]]
    REQUIRE(result.size() == 1);
    REQUIRE(result[0].size() == 3);
    REQUIRE(result[0][0] == -2);
    REQUIRE(result[0][1] == 0);
    REQUIRE(result[0][2] == 2);
}

TEST_CASE("3 duplicates")
{
    std::vector<int> input = {1,1,1};
    
    Solution sl;
    
    std::vector<std::vector<int>> result = sl.threeSum(input);
    
    // expected output is empty:
    REQUIRE(result.size() == 0);
}

TEST_CASE("leetcode example i struggled with runtime error!")
{
    std::vector<int> input = {-2,-3,0,0,-2};
    
    Solution sl;
    
    std::vector<std::vector<int>> result = sl.threeSum(input);
    REQUIRE(1 == 1);
}

