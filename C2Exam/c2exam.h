#include<stdbool.h>
#include<math.h>
#include<stdlib.h>


typedef bool (*__cmp_fn__)(int,int);

bool is_bigger(int a, int b)
{
    return a>b;
}

bool is_smaller(int a, int b)
{
    return a<b;
}

int q1_get_max(int a,int b,int c)
{
    int max = a;
    if (b>a)
        max = b;
    if (c>max)
        max = c;
    return max;
}

bool q2_is_right_angled(int a,int b,int c)
{
    if( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a) )
        return true;
    return false;
}

int q3_array_fsum(int* a,int* b,int* c,int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (a[i] * b[i]) + c[i] ;
    }
    return sum;
}

int str_len(char* str1)
{
    int len = 0;
    while (*str1)
    {
        str1++;len++;
    }
    return len;
}
void q4_string_shuffle(char* str1)
{
    int len = str_len(str1);
    char tem;
    for (int i = 0; i < len ; i+=2)
    {
        tem = str1[i];
        str1[i] = str1[i+1];
        str1[i+1] = tem;
    }
}

void sort_list(int* list1)
{   
    for (int i = 0; i < 4; i++)
    {
        for (int next = i+1; next < 4; next++)
        {
            if (list1[i] > list1[next])
            {
                int x = list1[i];
                list1[i] = list1[next];
                list1[next] = x; 
            }
        }
    }
}

void q6_sort(int* a,int* b,int* c,int* d)
{
    int list1[4];
    list1[3] = *a;
    list1[2] = *b;
    list1[1] = *c;
    list1[0] = *d;
    sort_list(list1);
    *a = list1[3];
    *b = list1[2];
    *c = list1[1];
    *d = list1[0];
}

void q7_generic_sort(int* a,int* b,int* c,int* d,__cmp_fn__ func)
{
    int list1[4];
    list1[3] = *a;
    list1[2] = *b;
    list1[1] = *c;
    list1[0] = *d;
    sort_list(list1);
    if (func(2,1))
    {
        *a = list1[0];
        *b = list1[1];
        *c = list1[2];
        *d = list1[3];
    }
    if (func(1,2))
    {
        *a = list1[3];
        *b = list1[2];
        *c = list1[1];
        *d = list1[0];
    }
}

int q5_last_index_of(char* buff,char* string)
{
    int result = -1;
    int len_str = str_len(string); // koochike
    int len_buff = str_len(buff); // bozorga
    for (int i = 0; i < (len_buff-len_str+1); i++)
    {
        bool found = true;
        for (int j = 0; j < len_str; j++)
        {
            if (buff[i+j] != string[j])
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            result = i;
        }
    }
    return result;
}