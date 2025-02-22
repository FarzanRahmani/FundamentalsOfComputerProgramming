#include<stdbool.h>
#include<math.h>
#include<stdlib.h>


typedef int (*_int_2int_)(int, int);

int get_max(int a, int b)
{
    return a>b?a:b;
}

int get_min(int a, int b)
{
    return a<b?a:b;
}

int get_sum(int a, int b)
{
    return a+b;
}


int** q14_matrix_add(int** m1,int** m2,int row,int col)
{
    // int** sum = (int**)malloc( (sizeof(int[col])) * row );

    // int* r = (int*)malloc( sizeof(int[col]));
    // int** sum = (int**)malloc( sizeof(r) * row );

    // int** sum = (int**)malloc( sizeof(int[row][col]) );

    int* r = (int*)malloc( sizeof(int)*col);
    int** sum = (int**)malloc(sizeof(r)*row);

    // int sum[row][col] = (int**)malloc()
    // int** sum = (int**)malloc( sizeof(int)*100 );
    for(int i = 0; i < row; i++)
    {
        for(int j =0 ; j < col ; j++)
            {
                sum[i][j] = m1[i][j] + m2[i][j];
            }
    }
    return sum;
}

typedef struct
{
    double i;
    double r;
}complex_number;

complex_number* q15_create_complex_number(int im,int re)
{
    complex_number* pcn = (complex_number*)malloc(sizeof(complex_number*));
    pcn->i = im;
    pcn->r = re;
    return pcn;
}

void q16_add_complex_number(complex_number* pcn1,complex_number* pcn2)
{
    pcn1->i = pcn1->i + pcn2->i;
    pcn1->r = pcn1->r + pcn2->r;
}


char* q17_get_cn_ptr1(complex_number* pcn)
{
    char* x = (char*)malloc(sizeof(char*));
    x = (char*)pcn;
    return x;
}

char* q17_get_cn_ptr2(complex_number* pcn)
{
    char* x = (char*)malloc(sizeof(char*));
    x = (char*)pcn;
    return x+1;
}

typedef int(*fp)(int,int);

int q18_aggregate(int* array,int len,fp f )
{
    int result = 0;
    for(int i = 0; i < len;i++ )
        {
            result = f(array[i],result);
        }
    return result;
}

void q7_equation_to_string(int a,int b,int c,char* buf)
{
    char ca = a+48;
    char cb = abs(b)+48;
    char cc = c+48; 
    buf[0] = 'x';
    buf[1] = '^';
    buf[2] = 2+48;
    if(b>0)
    {
        buf[3] = '+';
    }
    if(b<0)
    {
        buf[3] = '-';
    }
    buf[4] = cb;
    buf[5] = 'x';
    buf[6] = '+';
    buf[7] = cc;
    buf[8] = 0;
}


void q6_number_to_string(int n,char* buf)
{
    int tem;
    if(n<0)
        {
            buf[0] = '-';
            n=n*(-1);
            while (n>0)
            {
                tem = tem % 10;
            }
            
        }
}
