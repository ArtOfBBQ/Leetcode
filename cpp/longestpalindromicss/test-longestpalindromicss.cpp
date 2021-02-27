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
// Test the private method 'get_iterator' of solution class

TEST_CASE("when the palindrome is the entire uneven string")
{
    std::string input = "ecbabce";
    Solution sl;
    
    REQUIRE("ecbabce" == sl.longestPalindrome(input));
}

TEST_CASE("when the palindrome is the entire even string")
{
    std::string input = "abccba";
    Solution sl;
    
    REQUIRE("abccba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the last character of uneven string is pal")
{
    std::string input = "abccbaz";
    Solution sl;
    
    REQUIRE("abccba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the first character of uneven string is pal")
{
    std::string input = "zabccba";
    Solution sl;
    
    REQUIRE("abccba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the last 2 chars of uneven string is pal")
{
    std::string input = "abcbazz";
    Solution sl;
    
    REQUIRE("abcba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the first 2 chars of uneven string is pal")
{
    std::string input = "zzabcba";
    Solution sl;
    
    REQUIRE("abcba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the last 3 chars of uneven string is pal")
{
    std::string input = "abbazzz";
    Solution sl;
    
    REQUIRE("abba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the first 3 chars of uneven string is pal")
{
    std::string input = "zzzabba";
    Solution sl;
    
    REQUIRE("abba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the last 4 chars of uneven string is pal")
{
    std::string input = "abazrqx";
    Solution sl;
    
    REQUIRE("aba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the first 4 chars of uneven string is pal")
{
    std::string input = "zrqxaba";
    Solution sl;
    
    REQUIRE("aba" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the first 5 chars of uneven string is pal")
{
    std::string input = "zxqorbb";
    Solution sl;
    
    REQUIRE("bb" == sl.longestPalindrome(input));
}

TEST_CASE("when all but the last 5 chars of uneven string is pal")
{
    std::string input = "bbzoqxr";
    Solution sl;
    
    REQUIRE("bb" == sl.longestPalindrome(input));
}

TEST_CASE("when the longest palindrome is just a letter")
{
    std::string input = "bhzoqxr";
    Solution sl;
    
    REQUIRE("b" == sl.longestPalindrome(input));
}

TEST_CASE("when the longest palindrome is buried")
{
    std::string input = "bhxqxxr";
    Solution sl;
    
    REQUIRE("xqx" == sl.longestPalindrome(input));
}

TEST_CASE("when the string is empty")
{
    std::string input = "";
    Solution sl;
    
    REQUIRE("" == sl.longestPalindrome(input));
}

