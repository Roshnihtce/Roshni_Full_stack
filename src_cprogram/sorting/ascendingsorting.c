#include <stdio.h>

int main()
{
    int temp=0;
    int array[8]={50,33,40,90,20,100,55,109};
    for(int i=0; i<8; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n*********Output***********\n");
    for(int j=0; j<8; j++)
    {
        for(int k=1+j; k<8; k++)
        {
           if(array[j]>array[k])
           {
              temp=array[j];
              array[j]=array[k];
              array[k]=temp;
           }
        }
    }
    printf("Ascending Order : ");
    for(int l=0; l<8; l++)
    {
        printf("%d",array[l]);
    }

    return 0;
}