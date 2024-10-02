//variables and data type

#include<stdio.h>
int main(){
    //declaration and initialization veriables

    char a  ;
    char name[]= { };
    int age ;
    float salary  ;
    double budget  ;

    //prompting the user to enter values

    printf("Enter character: ");
    scanf("%c",&a);
    printf("the character is:  %c \n",a);

    printf("Enter your name");
    scanf("%s",&name);
    printf("your name is %s \n",name);

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("your age is %d \n",age);

    printf("Enter your salary: ");
    scanf("%f",&salary);
    printf("your salary is %.2f \n",salary);

    printf("Enter your budget: ");
    scanf("%lf",&budget);
    printf("your budget is %.2lf \n",budget);


    return 0;
}
