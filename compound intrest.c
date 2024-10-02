#include <stdio.h>


int main()
{
    int principle;
    int period;
    float rate;
    int n;
    int time;
    int compoundinterest;
    int Amount;



    printf("\nEnter principle :\n");
    scanf("%d",&principle);

    printf("\nEnter time:\n");
    scanf("%d",&time);

    printf("\nEnter rate:\n");
    scanf("%f",&rate);

    printf("\nEnter number of times interest applied per time:\n");
    scanf("%d",&n);

    rate=rate/100;

    Amount=principle*((1+rate/n),n*period);

    compoundinterest=Amount-principle;



    printf("\n principle:%d\n",principle);
    printf("\n time:%d\n",time);
    printf("\n rate:%d\n",rate);
    printf("\n n:%d\n",n);
    printf("\n Amount:%d",Amount);
    printf("\n Results:%d","compound interest");


    return 0;
}
