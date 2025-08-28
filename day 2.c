#include<stdio.h>
int main( void)//A program that adds two variables x and y
{
    //declaration
    int x=2;
    int y=7;
    int sum=x+y;
    printf("the sum is %d\n",x+y);
    printf("the sum is %d\n",sum);
    //printing out a variable without declaration
    printf("The letter is %c\n",'A');
    printf("My name is %s\n","Sydney");
    //specifying two digits after decimal point with floating point values
    printf("%.2f",17.5);
    //using a double to store upto 7 values after the decimal point
    printf("%.7lf\n",3.12345678);
    //chaning variables
    int num=13;
    num=15;
    printf("%d",num);
    //printing out the size of my interger
    printf("%zu",sizeof(num));

    return 0;
}
