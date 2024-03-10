#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"
#include <string>

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	string dna = "GATGGAACTTGACTACGTAAATT";
	

	REQUIRE(transcribe_dna_into_rna_1(dna) == "GAUGGAACUUGACUACGUAAAUU");
}
