#include<stdio.h>
#include<string.h>
void main()
{
//strlen ==> length of a string
//strupr ==> Uppercase
//strlwr ==> lowercase
char str[200];
printf("Enter a string\n");
gets(str);
printf("Length    : %d\n",strlen(str));
printf("Uppercase : %s\n",strupr(str));
printf("Lowercase : %s\n",strlwr(str));

}
