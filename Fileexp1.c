#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("demo.txt","a");
    fprintf(fp,"\nI am Another line");
    fclose(fp);
}
