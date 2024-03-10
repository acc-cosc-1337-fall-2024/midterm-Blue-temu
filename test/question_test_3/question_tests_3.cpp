#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("test get_cookie_ingredients "){
	vector<double> expected_1 {1.5, 1, 2.75};
	REQUIRE(get_cookie_ingredients(48) == expected_1);

	vector<double> expected_2 {3, 2, 5.5};
	REQUIRE(get_cookie_ingredients(96) == expected_2);

	vector<double> expected_3 {0.75, 0.5, 1.375};
	REQUIRE(get_cookie_ingredients(24) == expected_3);

}
