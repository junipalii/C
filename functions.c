//function to subtract two numbers
#include<stdio.h>
int minus(int a, int b)
{
    int sub=b-a;
    return sub;
}//function declaration

int main()
{
    int x=5,y=8;
    int result=minus(x,y);
    printf("The answer to 8-5 is %d",result,x,y);
    return 0;
}
