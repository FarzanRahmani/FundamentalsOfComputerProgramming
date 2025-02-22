#include<stdio.h>
#include<math.h>

// int main()
// {
//     printf("\n\n hello world \n\n");
//     return 0;
// }


// void main()
// {
//     //  start  ,end  , step
//     for(int i=0;i<10;i++)
//     {
//         printf("%d\n",i);
//     }
// }

// void main()
// {
//     //  start  ,end  , step
//     for(int i=0;i<10;i++)
//     {
//         if(i % 2 ==0)
//         {
//             printf("%d\n",i);
//         }
//     }
// }

void main()
{
    // adad aashari = float python
    double n = 25;
    int nm = (int) sqrt(25);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 20; j++)
        {
            if (i%j == 0)
            {
                printf("%d,%d\n",i,j);
            }
        }
        
    }
    
}