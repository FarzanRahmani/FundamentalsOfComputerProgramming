#include<stdlib.h>
typedef struct _student
{
    char name[10];
    float grade;
} _student;

_student* add_grade(_student* ps,float ag)
{
    ps->grade += ag; // ps->grade  == (*ps).grade
    return ps;
}

typedef struct
{
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
}int_struct;

unsigned int* get_some_ptr(int_struct* x)
{
    // // *y -> 2 byte aval B | 2 byte dovomesho C
    // unsigned int* y= (unsigned int*)malloc(sizeof(unsigned int*));
    // unsigned int first_word = 0x0000ffff & x->B;
    // unsigned int second_word = 0xffff0000 & x->C;
    // *y = first_word + second_word;
    // // 0xccccbbbb = CB
    // return y;

    unsigned char* z = (unsigned char*)x;
    z += 6;
    return (unsigned int*)z;
}
// -exec x/4xb y
// -exec x/4xb &second_word
// -exec x/4xb &first_word
// -exec x/16xb &s
// -exec x/4xb ptr

typedef struct
{
    unsigned int A; // 4byte
    char B[6];
    unsigned int C; // 4byte
    double D; // 8byte
    unsigned int E; // 4byte
}complex_struct;

unsigned long long* get_some_ptr2(complex_struct* pcs)
{   
    unsigned char* y = (unsigned char*)pcs;
    y += 6;
    return (unsigned long long*)y;
}