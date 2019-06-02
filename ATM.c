#include<stdio.h>

void check_balance();
void withdrawal();
void deposit();
void cont();
int T = 1000;
void main()
{
int n;
printf("***********ATM************\n\n");
printf("Menu:\n1. Check Balance\n2. Withdrawal\n3. Deposit\n4. Exit\nSelect :\n");
scanf("%d",&n);

switch(n)
{
case 1:
    check_balance();
    break;
case 2:
    withdrawal();
    break;
case 3:
    deposit();
    break;
case 4:
    return 0;
    break;
default:
    printf("The number you entered is invalid\n");
    cont();
}
}

void check_balance()
{
    printf("Your Current Balance is %d\n",T);
    cont();
}

void withdrawal()
{
    int WA;
    printf("Enter the Amount you want to withdraw\n");
    scanf("%d",&WA);
    if(WA<=T)
    {
        T = T - WA;
        printf("You withdraw Rs. %d\n",WA);
        printf("Now Your Current Balance is Rs. %d\n",T);
    }
    else
    {
        printf("Your withdraw amount exceeds current balance\n");
    }
    cont();

}

void deposit()
{
    int DA;
    printf("Enter the Deposit Amount\n");
    scanf("%d",&DA);
    if(DA<=1500)
    {
        T = T + DA;
        printf("The Deposited Amount is Rs. %d\n",DA);
        printf("Now your current balance is Rs. %d\n",T);
    }
    else
    {
        printf("Amount greater than 1500 cannot be deposited\n");
    }

   cont();
}

 void cont()
 {
        char ch;
        printf("Do you want to continue... [Y]: ");
        scanf(" %c",&ch);
        if(ch=='Y'||ch=='y'){
        system("cls");
        main();
        }
 }
