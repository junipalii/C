#include<stdio.h>
#include<string.h>

int main(void)
{
    //create a name variable and printing it out
    char name[]="Sydney";
    printf("My name is %s\n",name);
    //changing the variable name using strcpy and printing it out
    strcpy(name,"Oricho");
    printf("My second name is %s\a\n",name);
    //changing the variable name individually element at a time
    name[0]='W';
    name[1]='h';
    name[2]='i';
    name[3]='t';
    name[4]='n';
    name[5]='e';
    name[6]='y';
    name[7]='\0';
    printf("My sisters name is %s",name);


}
