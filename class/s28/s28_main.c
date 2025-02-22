#include<stdio.h>

// const --> sabet  ,  char* --> pointer be char(address)  , argv --> moteghayer  , [] --> eshare be meghdar haye dakkhel argv na khode arg v ke ye pointer(address) ee
void print_args1(const char* argv[], int argc)
{
    for(int i=0; i<argc; i++)
        printf("%s\n", argv[i]); //argv[i]= *(argv+i)==address avalin char string==pointer be avalin char string          string --> pointer be avalin charactteresh
}

void print_args2(const char* argv[], int argc)
{
    for(int i=0; i<argc; i++)
    {
        const char* buf = argv[i];  // char* buf = address avalin char string
        printf("%s\n", buf); // mire be address string yeki yeki char ha ro chap mikone ta berese be 0
    }    
}
// *argv --> argv[0]  ,   *(*argv) --> *argv[0]  --> *(address string)
void print_args3(const char** argv, int argc)
{
    // ppc --> pointer pointer char
    char** ppc = (char**) argv; // ppc pointer be argv(dakhel argv address avalin ozve araye ast)
    int i = 0;
    while (i < argc)
    {
        // pch --> pointer char  --> eyne yek araye --> be ye string eshare mikone  (string araye ee az character hast)
        char* pch = *ppc; // pch = address avalin ozve araye == address avalin char oon string
        printf("%s\n", pch);  // mire be address string yeki yeki char ha ro chap mikone ta berese be 0
        ppc++;
        i++;
        // haman tor ke %d miad adado dar mabnaye decimal hesab mikone behet mide
        // %s ham mire be avalin char shoro mikone be jolo raftan va yeki yeki type mikone ta be sefr berese
    }
}

int strlen(const char* pch)
{
    int len = 0;
    while (*pch) // moadele while(*pch != 0)
    {
        len++;
        pch++;
    }
    return len;
}

//                                        int* = pointer be avalin ozv
void get_arg_lens(const char** argv, int argc, int* buf, int* buf_size)
{
    *buf_size = 0;
    for (int i = 0; i < argc; i++)
    {
        buf[i] = strlen(argv[i]);
        (*buf_size)++;
    }
    // be jaye khat 48 va 52 --> *buf_size = argc;
}

void get_arg_lens2(const char** argv, int argc, int* buf, int* buf_size)
{
    const char** ppc = argv; 
    for (int i = 0; i < argc; i++)
    {
        *buf = strlen(*ppc);
        ppc++;
        buf++;
    }
    *buf_size = argc;
}

//argument count =argc         argv = argument vector (araye ee ke har ozve an yek address(pointer) e mamolan pointer be string ee va avalin ozvesh address khode file ee)
int main(int argc, char const *argv[])
{   
    char x[] = "ali"; // automatic khodesh size ro dorost mikone
    int arg_lengths[10];
    int buf_size;
    get_arg_lens(argv, argc, arg_lengths, &buf_size);
    printf("There are %d arguments.\n", argc);
    for(int i=0; i<buf_size; i++)
    {
        printf("Length of arg %d is %d\n", i, arg_lengths[i]);
    }

    get_arg_lens2(argv, argc, arg_lengths, &buf_size);
    printf("There are %d args\n", argc);
    for(int i=0; i<buf_size; i++)
    {
        printf("Arg %d has length %d\n", i, arg_lengths[i]);
    }


    printf("number of args: %d\n", argc);
    print_args1(argv, argc);
    print_args2(argv, argc);
    print_args3(argv, argc);
    return 0;
}
