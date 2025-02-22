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

int q1_sum(int a,int b)
{
    return a+b;
}

bool q2_sum(int a,int b,int* s)
{
    int sum = a+b;
    *s = sum;
    if (sum % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int q3_solve_equation(int a,int b,int c,double* x1,double* x2)
{
    int delta = b*b - 4*a*c; 
    *x1 = (-1*b - sqrt(delta))/(2*a);
    *x2 = (-1*b + sqrt(delta))/(2*a);
    if (delta > 0)
    {
        return 2;
    }
    if (delta == 0)
    {
        return 1;
    }
    if (delta< 0)
    {
        *x1 = 0;*x2 = 0;
        return 0;
    }
}

void q4_add_equations(int a1,int b1,int c1,int a2,int b2,int c2,int* a,int* b,int* c)
{
    *a = a1 + a2;
    *b = b1 + b2;
    *c = c1 + c2;
}

int q5_digit_count(int x)
{
    int sum = 0;
    if (x<0)
    {
        x *= -1;
    }
    while (x>0)
    {
        x = x/ 10;
        sum++;
    }
    return sum;
}

void q8_fill_array(int* array,int len,int n)
{
    for(int i = 0 ; i<len;i++)
        {
            array[i] = n;
        }
}

void q9_array_copy(int* array1,int len,int* array2)
{
    for(int i = 0 ; i<len;i++)
        {
            array2[i] = array1[i];
            array1[i] = 0;
        }
}

int q10_max_odd_numbers(int* array1,int len)
{
    int max = 1;
    for(int i = 0 ; i< len ; i++)
    {
        if (array1[i] % 2 == 1)
        {
            if(array1[i] > max)
                {
                    max =array1[i];
                }
        }
    }
    return max;
}

int q11_max_odd_positions(int* array,int len)
{
    int max = 1;
    for(int i = 1 ; i< len ; i = i +2)
    {
        if(array[i] > max)
            {
                max =array[i];
            }
    }
    return max;
}

void q12_reverse_odd_positions(char* buf)
{
    int len = 0;
    char* buf2 = buf;
    while (*buf2)
    {
        len++;buf2++;
    }
    int mid = len/2;
    char tem;
    for (int i = 0; i < mid; i++)
    {
        if(i % 2 == 1)
            {
                if (len % 2 == 1)
                {
                    tem = buf[len-1-i];
                    buf[len-1-i] = buf[i];
                    buf[i] = tem;
                }
                else
                {
                    tem = buf[len-i];
                    buf[len-i] = buf[i];
                    buf[i] = tem;
                }
                
            }
    }
}

bool q13_matrix_compare(int** m1,int** m2,int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for(int j =0 ; j < col ; j++)
            {
                if (m1[i][j] != m2[i][j])
                {
                    return false;
                }
                
            }
    }
    return true;
}

int** q14_matrix_add(int** m1,int** m2,int row,int col)
{
    // int** sum = (int**)malloc( (sizeof(int[col])) * row );

    // int* r = (int*)malloc( sizeof(int[col]));
    // int** sum = (int**)malloc( sizeof(r) * row );

    int** sum = (int**)malloc( sizeof(int[row][col]) );
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
    int result = 2;
    for(int i = 0; i < len;i++ )
        {
            result = f(array[i],result);
        }
    return result;
}

void q7_equation_to_string(int a,int b,int c,char* buf)
{
    char ca = a+48;
    char cb = b+48;
    char cc = c+48;
    buf[0] = 'x';
    buf[1] = '^';
    buf[2] = ca;
    buf[3] = '+';
    buf[4] = cb;
    buf[5] = 'x';
    buf[6] = '+';
    buf[7] = cc;
    buf[8] = 0;
}

void q6_number_to_string(int n,char* buf)
{
    
}
