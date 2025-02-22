#include<stdio.h>

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
    //*buf_size = 0;
    for (int i = 0; i < argc; i++)
    {
        buf[i] = strlen(argv[i]);
        //(*buf_size)++;
    }
    *buf_size = argc;  // be jaye khat 21 va 17 --> 
}

void get_arg_lens2(const char** argv, int argc, int* buf, int* buf_size)
{
    // char** ppc = argv; 
    for (int i = 0; i < argc; i++)
    {
        // *buf = strlen(*ppc);
        *buf = strlen(*argv);
        //ppc++;
        argv++;
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
    printf("There are %d args\n", argc);
    for(int i=0; i<buf_size; i++)
    {
        printf("Arg %d has length %d\n", i, arg_lengths[i]);
    }


    get_arg_lens2(argv, argc, arg_lengths, &buf_size);
    printf("There are %d args\n", argc);
    for(int i=0; i<buf_size; i++)
    {
        printf("Arg %d has length %d\n", i, arg_lengths[i]);
    }
    return 0;
}