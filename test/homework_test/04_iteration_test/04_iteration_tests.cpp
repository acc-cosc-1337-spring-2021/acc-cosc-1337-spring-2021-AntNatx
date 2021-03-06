#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "dna.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("testing loop to find gc content", "using agctatg")
{
	REQUIRE (get_gc_content("AGCTATAG")== .375);
	REQUIRE (get_gc_content("CGCTATAG")== .50);
}

TEST_CASE ("Testing reverse string", "using for loop")
{
	REQUIRE (get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE (get_reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE ("testing dna complement", "using for and if else")
{
	REQUIRE (get_dna_complement("AAAACCCGGT")== "ACCGGGTTTT");
	REQUIRE (get_dna_complement("CCCGGAAAAT")== "ATTTTCCGGG");
}