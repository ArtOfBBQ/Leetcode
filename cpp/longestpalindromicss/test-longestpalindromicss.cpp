#define CATCH_CONFIG_MAIN

#include "../catch.hpp"

#include "longestpalindromicss.cpp"

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

///////////
// IMPLEMENTATION DETAIL TESTS...
// Test the private method 'longest_pal_radius' of solution class
TEST_CASE("implemention detail 1")
{
    std::string input = "bab";
    Solution sl;    

    REQUIRE(1 == sl.longest_pal_radius(input, 1, 1));
}

TEST_CASE("implementation detail 2")
{
    std::string input = "cab";
    Solution sl;    

    REQUIRE(0 == sl.longest_pal_radius(input, 1, 1));
}

TEST_CASE("implementation detail 3")
{
    std::string input = "c";
    Solution sl;    

    REQUIRE(0 == sl.longest_pal_radius(input, 0, 0));
}

TEST_CASE("implementation detail 4")
{
    std::string input = "allb";
    Solution sl;    

    REQUIRE(0 == sl.longest_pal_radius(input, 1, 2));
}

TEST_CASE("implementation detail 5")
{
    std::string input = "alcb";
    Solution sl;    

    REQUIRE(-1 == sl.longest_pal_radius(input, 1, 2));
}

TEST_CASE("implementation detail 6")
{
    std::string input = "babad";
    Solution sl;    

    REQUIRE(1 == sl.longest_pal_radius(input, 2, 2));
}

TEST_CASE("implementation detail 7")
{
    std::string input = "amelklembdefebab";
    Solution sl;    

    REQUIRE(3 == sl.longest_pal_radius(input, 4, 4));
}

//
///////////

TEST_CASE("Example 1")
{
    std::string input = "babad";
    Solution sl;
    
    REQUIRE("bab" == sl.longestPalindrome(input));
}

TEST_CASE("Example 2")
{
    std::string input = "cbbd";
    Solution sl;    

    REQUIRE("bb" == sl.longestPalindrome(input));
}

TEST_CASE("Example 3")
{
    std::string input = "ab";
    Solution sl;    

    REQUIRE("a" == sl.longestPalindrome(input));
}

TEST_CASE("Example 4")
{
    std::string input = "amelklembdefebab";
    Solution sl;    

    REQUIRE("melklem" == sl.longestPalindrome(input));
}

TEST_CASE("Example 5")
{
    std::string input = "dd";
    Solution sl;    

    REQUIRE("dd" == sl.longestPalindrome(input));
}

