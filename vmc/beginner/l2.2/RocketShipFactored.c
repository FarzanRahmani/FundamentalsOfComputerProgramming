#include<stdio.h>

void cone()
{
    """head""";
    printf("    ^ \n");
    printf("   /|\\ \n");
    printf("  //|\\\\ \n");
    printf(" ///|\\\\\\ \n");
}

void body()
{
    //body
    printf("+-------+ \n");
    printf("+*******+ \n");
    printf("+*******+ \n");
    printf("+*******+ \n");
    printf("+*******+ \n");
}

void seperator()
{
    printf("+-------+ \n");
}

void main()
{
    cone();
    body();
    body();
    body();
    seperator();
    cone();
}