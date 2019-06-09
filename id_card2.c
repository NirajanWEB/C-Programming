#include<stdio.h>

struct idCard
{
    char name[50];
    int roll;
    char sec;
    char course[20];
};

void main()
{
    struct idCard S[50];
    int n,i;
    printf("How many Student data you want to fill?\n");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        printf("Enter Student %d Name\n",(i+1));
        gets(S[i].name);
        printf("Enter Student %d Roll No\n",(i+1));
        scanf("%d",&S[i].roll);
        printf("Enter Student %d Section\n",(i+1));
        scanf(" %c",&S[i].sec);
        getchar();
        printf("Enter Student %d Course Enrolled\n",(i+1));
        gets(S[i].course);
    }
    printf("Enter Student no to view id\n");
    scanf("%d",&n);
    n = n-1;
    printf("*************ID CARD*****************\n");
    printf("Name     : %s\nSection  : %c\nRoll no. : %d\nCourse   :%s\n"
           ,S[n].name,S[n].sec,S[n].roll,S[n].course);
    printf("*************************************");
}


