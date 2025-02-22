#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<stdbool.h>
#include "tamrin.h"


TEST_CASE( "Is lower triangular matrix", "[matrix]" ) {
    int matrix[25]; // 5 * 5
    
    set_1_marix(matrix,5,5);
    REQUIRE(is_lower_triangular_matrix(matrix,5,5) == false);

    set_lower_triangular_matrix(matrix,5,5);
    REQUIRE(is_lower_triangular_matrix(matrix,5,5) == true);
}