//A function to multiply two numbers
#include<stdio.h>
int times(int x, int y)//varaiable declaration
{
    int quotient_=x*y;
    return quotient_;
}
void myfunction(char name[])//this funtions will hold a variable name
{
    printf("hello %s\n",name);//print a greeting to the name provided
}

int main()
{   myfunction("Liam");//print out hello liam
    int a=5,b=4;//arguments
    int result=times(a,b);//stores the multiple in the variable result
    printf("The multiple of 5 and 4 is %d\n",result,a,b);

    return 0;
}

