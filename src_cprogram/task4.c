#include <stdio.h>
#include <string.h>
void reverse();
int main()
{
     reverse();
     return 0;
}
void reverse()
{
    char name[6];
    printf("Please enter your name :\t");
    scanf("%s",&name);

    for(int i=strlen(name)-1; i>=0; i--)
    {
        printf("%c", name[i]);
    }

}