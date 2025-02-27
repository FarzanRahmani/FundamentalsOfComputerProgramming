#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "cexam.h"
#include <string.h>


TEST_CASE("q6 number to string", "[hard][!hide]") {
    char buf[10] = "";
    q6_number_to_string(5, buf);
    REQUIRE( strcmp(buf, "5") == 0);

    q6_number_to_string(-5, buf);
    REQUIRE( strcmp(buf, "-5") == 0);

    q6_number_to_string(15, buf);
    REQUIRE( strcmp(buf, "15") == 0);

    q6_number_to_string(-15, buf);
    REQUIRE( strcmp(buf, "-15") == 0);

    q6_number_to_string(115, buf);
    REQUIRE( strcmp(buf, "115") == 0);

    q6_number_to_string(123456, buf);
    REQUIRE( strcmp(buf, "123456") == 0);
}

TEST_CASE("q7 equation to string", "[hard]") {
    char buf[100];
    q7_equation_to_string(1,2,4, buf);
    REQUIRE( strcmp(buf, "x^2+2x+4") == 0);

    q7_equation_to_string(1,-2,5, buf);
    REQUIRE( strcmp(buf, "x^2-2x+5") == 0);
}


TEST_CASE("q14 matrix add", "[intermediate][!hide]") {
    int m11[] = {1,2,2}, m12[] = {2,1,3};
    int* m1[] = {m11, m12};

    int m21[] = {3,2,0}, m22[] = {-1,1,1};
    int* m2[] = {m21, m22};
    const int ex[][3] = { {4,4,2}, {1,2,4}};

    int** sum = q14_matrix_add(m1, m2, 2, 3);
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            REQUIRE(sum[i][j] == ex[i][j]);

    for(int i=0; i<2; i++)
        free(sum[i]);
    free(sum);

    int ma11[]={1,2,2,2}, ma12[] ={2,1,1,3} , ma13[] ={2,1,1,3};
    int* ma1[] = {ma11, ma12, ma13};
    int ma21[]={1,2,1,2}, ma22[]={2,4,1,3}, ma23[]={2,1,1,3};
    int* ma2[] = {ma21, ma22, ma23};
    const int exa[][4] = { {2,4,3,4}, {4,5,2,6},{4,2,2,6}};
    sum = q14_matrix_add(ma1, ma2, 3, 4);

    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++)
            REQUIRE(sum[i][j] == exa[i][j]);

    for(int i=0; i<3; i++)
        free(sum[i]);
    free(sum);
}


TEST_CASE( "q17_view_memory", "[hard][!hide]" ) {
    complex_number* pcn = q15_create_complex_number(32343.14152831, 11112121.83838);
    char* ptr1 = q17_get_cn_ptr1(pcn);
    char* ptr2 = q17_get_cn_ptr2(pcn);
    int w = *ptr1;
    w <<= 8;
    w |= *ptr2;
    REQUIRE( w == 0x0e3a);
    free(pcn);    

    pcn = q15_create_complex_number(9328347.23847192, 3834718.1238738);
    ptr1 = q17_get_cn_ptr1(pcn);
    ptr2 = q17_get_cn_ptr2(pcn);
    w = *ptr1;
    w <<= 8;
    w |= *ptr2;
    REQUIRE( w == 0x670f);
    free(pcn);    
}


TEST_CASE( "q18_function pointer", "[intermediate]" ) {
    int array1[] = {7, 4, 2, 9, 11, -1, 3, 7, 2};
    REQUIRE( q18_aggregate(array1, 9, get_max) == 11);
    REQUIRE( q18_aggregate(array1, 9, get_min) == -1);
    REQUIRE( q18_aggregate(array1, 9, get_sum) == 44);

    int array2[] = {-12, 2, 18, 2, 4, 7, -2};
    REQUIRE( q18_aggregate(array2, 7, get_max) == 18);
    REQUIRE( q18_aggregate(array2, 7, get_min) == -12);
    REQUIRE( q18_aggregate(array2, 7, get_sum) == 19);
}
