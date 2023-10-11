#include<stdio.h>
int main()
{
    
    int  cash_withdrawal,cash_deposit,mini_statement,reset_pin;
    int choice;
    int Enter_amount;
    int enter_your_pin;
    int new_pin;
    printf("please insert a your ATM CARD:\n");
    printf("select your option:\n");
    printf("1.cash withdrawal\n2.cash deposit\n3.mini statement\n4.reset_pin\n");
    
    scanf("%d",&choice);
    
switch(choice)
{
    case 1:
    printf("cash_withdrawal\n");
    printf("Enter your pin:");
    scanf("%d",&enter_your_pin);
    printf("%d",enter_your_pin);
    printf("\nEnter amount: ");
    scanf("%d",&Enter_amount);
    printf("%d",Enter_amount);
    printf("\n **take your cash ***");
    break;
    
    case 2:
    printf("cash_deposit\n");
    printf("Enter your pin:");
    scanf("%d",&enter_your_pin);
    printf("%d",enter_your_pin);
    printf("\nEnter amount: ");
    scanf("%d",&Enter_amount);
    printf("%d",Enter_amount);
    printf("\n ***your cash is deposit***");
    break;
    
    case 3:
    
    printf("Enter your pin:");
    scanf("%d",&enter_your_pin);
    printf("%d",enter_your_pin);
    printf("\nmini_statement\n");
    printf(" ___________________\n");
    printf("| no:8747645XXX     |\n");
    printf("| so.n=38672622     |\n");
    printf("|amount w_d 500.    |\n");
    printf("|amount d_t 2000.   |\n");
    printf("|amount d_t 3000.   |\n");
    printf("|amount w_d 500.    |\n");
    printf("|amount d_t 2000.   |\n");
    printf("|amount d_t 2000.   |\n");
    printf("|amount d_t 3000.   |\n");
    printf("|amount w_d 500.    |\n");
    printf("|av:balance_12000/- |\n");
    printf("|___________________|\n");
    break;
    
    case 4:
    printf("Enter yourpin:");
    scanf("%d",&enter_your_pin);
    printf("%d",enter_your_pin);
    printf("\nEnter your new pin:");
    scanf("%d",&new_pin);
    printf("%d",new_pin);
    printf("\nsuccessfully change your \npinXXXX");
    break;
}

}













