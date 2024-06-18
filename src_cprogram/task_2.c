#include <stdio.h>

int main()
{
    int size;
    printf("Please enter the size of the array: ");
    scanf("%d",&size);

    int array[size];
    printf("enter %d elements :\n",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Even numbers in the array :\n");
    for(int i=0; i<size; i++)
    {
        if(array[i] % 2 == 0)
        {
            printf("%d\n", array[i]);
        }
    }
    printf("Odd numbers in the array :\n");
    for(int i=0; i<size; i++)
    {
        if(array[i] % 2 != 0)
        {
            printf("%d\n", array[i]);
        }
    }
    return 0;
} 