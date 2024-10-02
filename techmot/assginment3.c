// A program  to look if a castomer qualifies
#include <stdio.h>
int main() {

    //declaring variables
    int Age;
    int Income;

    // Entering values
    printf("Enter the age: \n");
    scanf("%d" ,&Age);

    printf("Enter the Income: \n");
    scanf("%d" ,&Income);

    if(Age >=21 && Income >= 21000){
        printf("congratulations, you qualify for the loan");
    }
    else{
        printf("unfortunately,you don't qualify for the loan");
    }

    return 0;
}