#define CATCH_CONFIG_MAIN

#include "../catch.hpp"

#include "addbinary.cpp"

TEST_CASE("leetcode example 1")
{
    std::string input1 = "11";
    std::string input2 = "1";
    
    Solution sl;
    REQUIRE("100" == sl.addBinary(input1, input2));
}

TEST_CASE("leetcode example 2")
{
    std::string input1 = "1010";
    std::string input2 = "1011";
    
    Solution sl;
    
    REQUIRE("10101" == sl.addBinary(input1, input2));
}

TEST_CASE("large strings")
{
    std::string input1 = "1001010101010110101";
    std::string input2 = "10100101011010101";
    
    Solution sl;
    
    REQUIRE("1011111010110001010" == sl.addBinary(input1, input2));
}

TEST_CASE("empty strings")
{
    std::string input1 = "0";
    std::string input2 = "";
    
    Solution sl;
    
    REQUIRE("0" == sl.addBinary(input1, input2));
}

