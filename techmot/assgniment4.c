//program to get compound interest
#include<stdio.h>
int main() {

    int principal;
    int rate;
    int time;

    //prompt the user to enter variables
    printf("enter principal");
    scanf("%d",&principal);

    printf("enter rate");
    scanf("%d",&rate);

    printf("enter time in years");
    scanf("%d",&time);

    int amount;
    amount=principal*(1+rate/100)^time;

    int interest;
    interest=amount-principal;
    printf("interest is%d",interest);
    return 0;

}