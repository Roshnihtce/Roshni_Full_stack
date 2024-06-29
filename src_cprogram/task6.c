#include <stdio.h>

int main()
{
    int oddnum;
    printf("*******1 to 100 Odd Number********\n");
    for(int i=1; i<=100; i++)
    {
        if(i%2!=0)  
        {
            printf(" %d \n",i);
        }
    }
    return 0;
}