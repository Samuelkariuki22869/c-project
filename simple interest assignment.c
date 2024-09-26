#include <stdio.h>


int main()


{
    int principle,period,rate,si,a;

    printf("\nEnter principle amount:\n");
    scanf("%d",&principle);

    printf("\n Enter time:\n");
    scanf("%d",&period);

    printf("\nEnter rate:\n");
    scanf("%d",&rate);

    si=principle*period*rate/100;

    printf("\n principle:%d\n",principle);
    printf("\n time:%d\n",period);
    printf("\n rate:%d\n",rate);
    printf("\n Results:%d\n",si);
    return 0;
}
