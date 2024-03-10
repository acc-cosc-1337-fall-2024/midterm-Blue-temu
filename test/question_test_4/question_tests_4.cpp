#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test get_kinetic_energy_do")
{
	REQUIRE(get_kinetic_energy_do(10,9) == 405);
	REQUIRE(get_kinetic_energy_do(20,5) == 250);
	REQUIRE(get_kinetic_energy_do(30,7) == 735);
}
