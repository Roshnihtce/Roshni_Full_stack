#include <stdio.h>

int main()
{
    int num[10];
    int Evensum=0;
    int Oddsum=0;

    printf("*******Sum of Even or Odd Numbers*********\n\n");
    printf("Please Enter any ten numbers :\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d",num[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(num[i]%2==0)
        {
            Evensum +=num[i];
        }
        else
        {
            Oddsum +=num[i];
        }
    }
    printf("\n**************Output*************\n\n");
    printf("Sum of Even Numbers : %d\n",Evensum);
    printf("Sum of Even Numbers : %d\n",Oddsum);
    return 0;
}