#include<stdio.h>

void exp(); //function declaration

void main()
{
//printf("Function is not called");
exp();    //function call
//printf("value passed in function is %d",x);
}
//function defination
void exp()
{
    int b;
    printf("Enter any number\n");
    scanf("%d",&b);
    printf("Value entered in the function is %d\n",b);
}
