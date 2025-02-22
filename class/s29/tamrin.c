#include<stdbool.h>

void set_1_marix(int* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_col*num_of_row; i++)
    {
        pmat[i] = 1;
    }
}

void set_lower_triangular_matrix(int* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = 0; j < num_of_col; j++)
        {
            if (j>i)
                pmat[i*num_of_col+j] = 0;
        }
    }
}

bool is_lower_triangular_matrix(int* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = 0; j < num_of_col; j++)
        {
            if (j>i)
                if (pmat[i*num_of_col+j] != 0)
                    return false;
        }
    }
    return true;
}

// agar zamani be moshkel khordi dige niaz nist ke biay test_tamrin ke ye file bozog hast ro taghir bedi dobare compile koni faghat miyay tamrin.c ro avaz mikonii

bool is_lower_triangular_matrix2(int* pmat,int num_of_row,int num_of_col)
{
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = i+1; j < num_of_col; j++)
        {
            if (pmat[i*num_of_col+j] != 0)
                return false;
        }
    }
    return true;
}

bool is_lower_triangular_matrix3(int* pmat,int num_of_row,int num_of_col)
{
    bool isLowerTriangular = true;
    for (int i = 0; i < num_of_row; i++)
    {
        for (int j = i+1; j < num_of_col; j++)
        {
            isLowerTriangular = isLowerTriangular && (pmat[i*num_of_col+j] == 0);
        }
    }
    return isLowerTriangular;
}