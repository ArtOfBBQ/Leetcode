#define CATCH_CONFIG_MAIN

#include "../catch.hpp"

#include "zigzagconv.cpp"

TEST_CASE("example from leetcode")
{
    std::string input = "PAYPALISHIRING";
    Solution sl;
    
    REQUIRE(sl.convert(input, 3) == "PAHNAPLSIIGYIR");
}

TEST_CASE("2nd example from leetcode")
{
    std::string input = "A";
    Solution sl;
    
    REQUIRE(sl.convert(input, 1) == "A");
}

TEST_CASE("too many rows for the input")
{
    std::string input = "PAYPALISHIRING";
    Solution sl;
    
    REQUIRE(sl.convert(input, 30) == "PAYPALISHIRING");
}

TEST_CASE("empty input")
{
    std::string input = "";
    Solution sl;
    
    REQUIRE(sl.convert(input, 2) == "");
}

TEST_CASE("2 rows")
{
    std::string input = "HEDREAMTANOLDDREAM";
    Solution sl;
    
    REQUIRE(sl.convert(input, 2) == "HDEMAODRAERATNLDEM");
}

TEST_CASE("1 row")
{
    std::string input = "AB";
    Solution sl;
    
    REQUIRE(sl.convert(input, 1) == "AB");
}

