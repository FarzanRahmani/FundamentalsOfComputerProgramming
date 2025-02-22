#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}


// void reverse(char* buf,int size)
// {
//     int inx =0;
//     char* pbuf = &buf[0];
//     while (*pbuf != 0)
//     {
//         inx++;
//         pbuf++;
//     }
//     char x = 1;
//     for (int i = 0; i < (int)(inx/2); i++)
//     {
//         x = buf[inx-1-i];
//         buf[inx-1-i] = buf[i];
//         buf[i] = x;
//     }
// }

// TEST_CASE( "Reverse Test", "[string]" ) {
//     char mystr[10] ="Ali";
//     reverse(mystr,10);
//     REQUIRE(mystr[0] == "i");
//     REQUIRE(mystr[1] == "l");
//     REQUIRE(mystr[2] == "A");
//     REQUIRE(mystr[3] == 0);

//     char x[15] = "farzanrahmani";
//     REQIURE ( reverse(x,15) == "inamharnazraf" );
// }
