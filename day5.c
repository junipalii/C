//A function to add two values
#include<stdio.h>

int add(int x, int y)//function declaration and parameters
{
    int sum=x+y;//how the function works
    return sum;//function ends here

}

int main(void)
{
    int a=5,b=7;//arguement
    int result=add(a,b);
    printf("The sum of 5 and 7 is %d",result,a,b);
    return 0;


}
