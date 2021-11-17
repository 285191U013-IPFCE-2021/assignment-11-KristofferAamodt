#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail (1, 0)==1);                 // Min-number: sumtail(1) must be 1
    REQUIRE(sumtail (10000, 0)==10000);         // Max-number: sumtail(10^6) must be 10^6
}

TEST_CASE("sumwhile")
{
    REQUIRE(sumwhile (1)==1);               // Min-number: sumwhile(1) must be 1
    REQUIRE(sumwhile (1000000)==1000000);   // Max-number: sumwhile(10^6) must be 10^6
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Fib-numbers: 1, 1, 2, 3, 5, 8, 13, 21, 34,...
    REQUIRE(fib (3, 1, 1)==2);
    REQUIRE(fib (4, 1, 1)==3);
    REQUIRE(fib (9, 1, 1)==34);
}


