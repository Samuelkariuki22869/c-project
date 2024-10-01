#include <stdio.h>


int main()
{
    int age;
    int income;

    printf("enter your age\n");
    scanf("%d",&age);

    printf("enter your annual income in Kenyan shillings\n ");
    scanf("%d",&income);

    if(age>=21&& income>=21000){
     printf("congratulations,you qualify for the loan.\n");
    }else{
    printf("unfortunately,we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
