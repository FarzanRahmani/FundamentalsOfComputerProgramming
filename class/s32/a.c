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

    // int* r = (int*)malloc( sizeof(int)*col);
    // int** sum = (int**)malloc(sizeof(r)*row);

    // int sum[row][col] = (int**)malloc()
    // int** sum = (int**)malloc( sizeof(int)*100 );

    int** sum = (int**)malloc(sizeof(int*) * row);
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


int main(int argc, char const *argv[])
{
    // char buf[10] = "";
    // q6_number_to_string(5, buf);
    // // REQUIRE( strcmp(buf, "5") == 0);

    // q6_number_to_string(-5, buf);
    // // REQUIRE( strcmp(buf, "-5") == 0);

    // q6_number_to_string(15, buf);
    // // REQUIRE( strcmp(buf, "15") == 0);

    // q6_number_to_string(-15, buf);
    // // REQUIRE( strcmp(buf, "-15") == 0);

    // q6_number_to_string(115, buf);
    // // REQUIRE( strcmp(buf, "115") == 0);

    // q6_number_to_string(123456, buf);
    // // REQUIRE( strcmp(buf, "123456") == 0);



    int m11[] = {1,2,2}, m12[] = {2,1,3};
    int* m1[] = {m11, m12};

    int m21[] = {3,2,0}, m22[] = {-1,1,1};
    int* m2[] = {m21, m22};
    const int ex[][3] = { {4,4,2}, {1,2,4}};

    int** sum = q14_matrix_add(m1, m2, 2, 3);
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            // REQUIRE(sum[i][j] == ex[i][j]);

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
            // REQUIRE(sum[i][j] == exa[i][j]);

    for(int i=0; i<3; i++)
        free(sum[i]);
    free(sum);


    complex_number* pcn = q15_create_complex_number(32343.14152831, 11112121.83838);
    char* ptr1 = q17_get_cn_ptr1(pcn);
    char* ptr2 = q17_get_cn_ptr2(pcn);
    int w = *ptr1;
    w <<= 8;
    w |= *ptr2;
    // REQUIRE( w == 0x0e3a);
    free(pcn);    

    pcn = q15_create_complex_number(9328347.23847192, 3834718.1238738);
    ptr1 = q17_get_cn_ptr1(pcn);
    ptr2 = q17_get_cn_ptr2(pcn);
    w = *ptr1;
    w <<= 8;
    w |= *ptr2;
    // REQUIRE( w == 0x670f);
    free(pcn);    


    return 0;
}
