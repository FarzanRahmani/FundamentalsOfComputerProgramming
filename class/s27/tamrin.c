#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

int strlen(const char* pch,int size)
{
    int len = 0;
    while (*pch && len<size) // moadele while(*pch != 0)
    {
        len++;
        pch++;
    }
    return len;
}

TEST_CASE( "String Lenght" , "[string]" ) {
    REQUIRE(strlen("ali",4) == 3);
    char buf[10] = "hossein";
    REQUIRE(strlen(buf,10) == 7);
}