#include<stdio.h>
// #define max_size 100

int q2(int size_array,int* array,int find)
{
    for (int i = 1; i <= size_array; i++,array++)
    {
        if (find == *array)
        {
            printf("%d is found at %d position.",*array,i);
            return 0;
        }
        
    }
    printf("%d does not exists in array.",find);
    return 0;

    //

    // int* end = array + (size_array-1);
    // int index = 1;
    // while (array <= end)
    // {
    //     if(*array = find)
    //         printf("%d is found at %d position.",*array,index);
    //         return 0;
    //     index++;array++;
    // }
    // printf("%d does not exists in array.",find);
    // return 0;
}

int main(int argc, char const *argv[])
{
    int size_of_array;
    printf("Enter size of array:");
    scanf("%d",&size_of_array);

    printf("Enter elements of array:");
    int elements_of_array[size_of_array];
    // int elements_of_array[max_size];
    for (int i = 0; i < size_of_array; i++)
    {
        scanf("%d",&elements_of_array[i]);
    }
    
    
    
    int search_element;
    printf("Enter element to search:");
    scanf("%d",&search_element);

    q2(size_of_array,elements_of_array,search_element);
    return 0;
}
