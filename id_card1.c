#include<stdio.h>

struct id_card
{
    char name[50];
    char sec;
    int roll;
}S1, S2;

void main()
{
    //struct id_card S1, S2, S3;
    printf("Enter Student 1 name\n");
    gets(S1.name);
    printf("Enter Student 1 Section\n");
    scanf(" %c",&S1.sec);
    printf("Enter Student 1 Roll no.\n");
    scanf("%d",&S1.roll);
    printf("*************ID CARD*****************\n");
    printf("Name     : %s\nSection  : %c\nRoll no. : %d\n",S1.name,S1.sec,S1.roll);
    printf("*************************************");

}
