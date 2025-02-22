#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "mycode.h"

TEST_CASE( "Is lower triangle", "[matrix]" ) {
    int matrix[9];
    zeromemory(matrix, 9);

    setmatrix(matrix, 0, 0, 1);
    setmatrix(matrix, 1, 1, 1);
    setmatrix(matrix, 2, 0, 1);
    setmatrix(matrix, 2, 1, 1);
    setmatrix(matrix, 2, 2, 1);

    REQUIRE( IsLowerTriangularMatrix(matrix, 3, 3));
    setmatrix(matrix, 0, 2, 1);
    REQUIRE(! IsLowerTriangularMatrix(matrix, 3, 3));
}