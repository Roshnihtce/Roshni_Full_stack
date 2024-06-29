#include <stdio.h>

int main()
{
    int evennum;
    printf("*******1 to 100 Even Number********\n");
    for(int i=1; i<=100; i++)
    {
        if(i % 2 == 0 )
        {
            printf("\n%d",i);
        }
    }
    return 0;
}