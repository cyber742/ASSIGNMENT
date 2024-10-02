
//program to get simple interest
#include <stdio.h>
int main() {
    int principal;
    int rate;
    int time;

    //aske the user to enter the values

    printf("Enter principal");
    scanf("%d",&principal);

    printf("Enter rate: ");
    scanf("%d",&rate);

    printf("entr time in years");
    scanf("%d",&time);

    // calculate simple interest

    int interest;
    interest=(principal*rate*time)/100;//this will calculate simple interest

    printf("simple interest is %d",interest);//this will print simple interest

    return 0;
}