#include<stdio.h>
int main(void)
{
//Declaring variables with immediate assignment
    int x=1;
    float y=3.5;
    char name[7]="Sydney";
    char grade='A';
    //Declaring a variable and assigning it later
    int paycheck;
    paycheck=100000;
    /*Printing output to the screen */
    printf("I got a distinction of %d with a mean grade of %c \n My name is %s i have a gpa of %.1f\n ",x,grade,name,y);
    printf("The salary is %d",paycheck);
}
