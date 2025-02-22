int array_sum(int* vec,int size)
{
    int sum = 0;
    for(int i = 0 ; i<size;i++)
    {
        sum += vec[i];
    }
    return sum;
}

int array_sum_ptr(int* vec,int size)
{
    int sum = 0;
    for(int i = 0 ; i<size; i++,vec++)
    {
        sum += *vec;
    }
    return sum;
}

int array_sum2d(int row,int col,int vec[][2])
{
    int sum =0;
    for(int i = 0;i<row;i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += vec[i][j];
        }
        
    }
    return sum;
}

int array_sum2d_ptr(int row,int col ,int* vector)
{
    int sum = 0;
    int* tem;
    for(int i = 0; i<row; i++)
    {
        for (int j = 0; j < col; j++,vector++)
        {
            sum += *vector;
        }
    }
    return sum;
}

int jagged_array_sum(int** pp_jagged_vector,int* p_size_vector,int row_count)
{
    int sum = 0;
    for (int i = 0; i < row_count; i++)
    {
        for (int j = 0; j < p_size_vector[i]; j++)
        {
            sum += pp_jagged_vector[i][j];
        }
    }
    return sum;
}

int jagged_array_sum_ptr(int** pp_jagged_vector,int* p_size_vector,int row_count)
{
    int sum = 0;
    for (int i = 0; i < row_count; i++)
    {
        for (int j = 0; j < *(p_size_vector+i) ; j++)
        {
            sum += *( *(pp_jagged_vector+i) + j);
            // (pp_jagged_vector+i) --> adress row i om   |  *(pp_jagged_vector+i) --> meghdar row i om = address deraye
            // ( *(pp_jagged_vector+i) + j) --> address deraye i,j om  |  *( *(pp_jagged_vector+i) + j) --> meghdar deraye i,j om
        }
    }
    return sum;
}