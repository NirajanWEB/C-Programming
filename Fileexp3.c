#include<stdio.h>
void main()
{
    FILE *fp,*fp1;
    char t,ch;
    fp = fopen("readWrite.txt","a");
    printf("Enter the terminating character\n");
    scanf(" %c",&t);
    getchar();
    printf("Enter any string\n");
    while(ch != t)
    {
        ch = getchar();
        fputc(ch,fp);
    }
    fclose(fp);
    fp1 = fopen("readWrite.txt","r");
    printf("\n\nThe Content of file are:\n\n\n");
    while(!feof(fp1))
    {
        ch = fgetc(fp1);
        putchar(ch);
    }
    fclose(fp1);

}
