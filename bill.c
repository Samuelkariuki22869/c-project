 #include <stdio.h>
 #include <stdlib.h>


int main()
{
    int customerID;
    int unitsconsumed;
    char customername[50];
    float chargesperunit , surcharge,totalbill;



    printf("enter customername:");
    scanf("%s",&customername);

    printf("enter customerID:");
    scanf("%d",&customerID);

    printf("enter unitsconsumed:");
    scanf("%d",&unitsconsumed);






    if(unitsconsumed <=199){
        chargesperunit =1.20;
    }else if(unitsconsumed>=200 && unitsconsumed <400){
     chargesperunit =1.50;
    }else if(unitsconsumed>=400 && unitsconsumed < 600){
        chargesperunit =1.80;
    }else{
    chargesperunit =2.00;
    }

     totalbill=(unitsconsumed*chargesperunit);

     if (totalbill>400){
            surcharge=0.15;
           totalbill+=surcharge;
     }

     if (totalbill<100){
            totalbill=100;
     }
     printf("customername:%s\n",customername);
     printf("customersID:%d\n",customerID);
     printf("unitsconsumed:%d\n",unitsconsumed);
     printf("totalbill: %.2f\n",totalbill);



    return 0;
    }
