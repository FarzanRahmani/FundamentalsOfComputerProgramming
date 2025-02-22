#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<stdbool.h>

void set_1_marix(int* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_col*num_of_row; i++)
    {
        pmat[i] = 1;
    }
}

void set_lower_triangular_matrix(int* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = 0; j < num_of_col; j++)
        {
            if (j>i)
                pmat[i*num_of_col+j] = 0;
        }
    }
}

bool is_lower_triangular_matrix(int* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = 0; j < num_of_col; j++)
        {
            if (j>i)
                if (pmat[i*num_of_col+j] != 0)
                    return false;
        }
    }
    return true;
}


TEST_CASE( "String Length", "[string]" ) {
    int matrix[25]; // 5 * 5
    
    set_1_marix(matrix,5,5);
    REQUIRE(is_lower_triangular_matrix(matrix,5,5) == false);

    set_lower_triangular_matrix(matrix,5,5);
    REQUIRE(is_lower_triangular_matrix(matrix,5,5) == true);
}