#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "lssworepchars.cpp"

TEST_CASE("Initialize an AI agent")
{
    REQUIRE(1 == 1);
}

TEST_CASE("example 1") {
    Solution sl;
    std::string input = "abcabcbb";
     
    REQUIRE(sl.lengthOfLongestSubstring(input) == 3);
}

TEST_CASE("example 2") {
    Solution sl;
    std::string input = "bbbbb";
     
    REQUIRE(sl.lengthOfLongestSubstring(input) == 1);
}

TEST_CASE("example 3") {
    Solution sl;
    std::string input = "pwwkew";
    
    REQUIRE(sl.lengthOfLongestSubstring(input) == 3);
}

TEST_CASE("example 4") {
    Solution sl;
    std::string input = "";
    
    REQUIRE(sl.lengthOfLongestSubstring(input) == 0);
}

TEST_CASE("example 5") {
    Solution sl;
    std::string input = "abcazzabcdeff";
    
    REQUIRE(sl.lengthOfLongestSubstring(input) == 7);
}

TEST_CASE("example 6") {
    Solution sl;
    std::string input = "abcazzabcdef";
    
    REQUIRE(sl.lengthOfLongestSubstring(input) == 7);
}

