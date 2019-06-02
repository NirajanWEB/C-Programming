// strcpy, strcmp, strcat

//ASCII code
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100] = "ABB";
    char str2[100] = "ABA";
    int x;
    //strcpy(str1,str2);
    //strcat(str1,str2);
    //puts(str1);
    //puts(str2);
    x = strcmp(str1,str2);
  //  printf("%d",x);
    if(x>0)
    {
        printf("str1 is greater than str2");
    }
    else if(x<0)
    {
        printf("str2 is greater than str1");
    }
    else
    {
        printf("Both are equal");
    }
}
