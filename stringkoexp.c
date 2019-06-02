#include<stdio.h>

void main()
{
    char str[200];
    char ch,ch1,t;
    printf("Enter a terminator\n");
    scanf(" %c",&t);
    int i = 0;
    while(ch != t)
    {
        ch = getchar();
        str[i] = ch;
        i++;
    }

    printf("The statements is :\n\n");

    i = 0;
    while(ch1 != t)
    {
        ch1 = str[i];
        if(ch1 !=t )
        {
        putchar(ch1);
        }
        i++;
    }

}
