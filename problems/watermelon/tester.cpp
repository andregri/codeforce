#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch.hpp"

#define MY_DEBUG

#include "solution.hpp"

extern std::string divideEvenParts(int weight);

TEST_CASE( "Divide the watermelon", "[divide]" ) {
    REQUIRE( divideEvenParts(1) == "NO");
    REQUIRE( divideEvenParts(2) == "NO");
    REQUIRE( divideEvenParts(3) == "NO");
    REQUIRE( divideEvenParts(4) == "YES");
    REQUIRE( divideEvenParts(5) == "NO");
    REQUIRE( divideEvenParts(6) == "YES");
    REQUIRE( divideEvenParts(7) == "NO");
    REQUIRE( divideEvenParts(8) == "YES");
    REQUIRE( divideEvenParts(9) == "NO");
    REQUIRE( divideEvenParts(10) == "YES");

}