#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("deo.txt","r");
    if (fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        while(!feof(fp))
        {
            ch = fgetc(fp);
            putchar(ch);
        }
    }
}
