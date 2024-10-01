#include <stdio.h>


int main()
{
    int bookID;
    int duedate;
    int returndate;
    int daysoverdue;
    int rate;
    int amount;

    printf("enter bookID:");
    scanf("%d",&bookID);
    printf("enter due date:");
    scanf("%d",&duedate);
    printf("enter return date:");
    scanf("%d",&returndate);

    daysoverdue=returndate-duedate;

    if(daysoverdue<=7){
            rate=20;
    }else if(daysoverdue<=14){
        rate=50;
    }else{
        rate=100;
}
    amount=rate*daysoverdue;

    printf("bookID:%d\n",bookID);
    printf("due date:%d\n",duedate);
    printf("return date:&d\n",returndate);
    printf("days overdue:%d\n",daysoverdue);
    printf("fine rate:KSh%d per day\n",rate);
    printf("total fine amount;KSh%d\n",amount);

    return 0;
}
