/*#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define RICEPRICE 300
#define SUGARPRICE 200
#define POTATOSPRICE 150
#define APPLESPRICE 400
void main()
{
    printf("|*********************************************|\n");
    printf("|                                             |\n");
    printf("|~*WELCOME TO SMART UTILITY AND SHOPPING HUB*~|\n");
    printf("|                                             |\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    
    time_t zaman;
    time(&zaman);
    printf("Current Date/Time : %s\n",ctime(&zaman));

    int rice_qty,sugar_qty,potatos_qty,apples_qty;
    printf("Enter Rice Quantity in KG : ");
    scanf("%d",&rice_qty);
    printf("Enter Sugar Quanttiy in KG : ");
    scanf("%d",&sugar_qty);
    printf("Enter Potatos Quantity in KG : ");
    scanf("%d",&potatos_qty);
    printf("Enter Apples Quantity in KG : ");
    scanf("%d",&apples_qty);

    int ricetotal = rice_qty*RICEPRICE;
    int sugartotal = sugar_qty*SUGARPRICE;
    int potatostotal = potatos_qty*POTATOSPRICE;
    int applestotal = apples_qty*APPLESPRICE;

    int subtotal = ricetotal+sugartotal+potatostotal+applestotal;

    printf("\n\n\nRice (%dKG*%d) = %d\n",rice_qty,RICEPRICE,ricetotal);
    printf("Sugar (%dKG*%d) = %d\n",sugar_qty,SUGARPRICE,sugartotal);
    printf("Potatos (%dKG*%d) = %d\n",potatos_qty,POTATOSPRICE,potatostotal);
    printf("Apples (%dKG*%d) = %d\n\n",apples_qty,APPLESPRICE,applestotal);

    printf("````````````````````````\n");
    printf("Grocery Subtotal = %d.\n\n",subtotal);
    printf("````````````````````````\n");

    int amountpaid,n1000,n500,n100,n50,n20,n10,chain;

    printf("Enter the amount you have paid : ");
    scanf("%d",&amountpaid);
    int remaining = amountpaid-subtotal;
    printf("Balance Return : %d.\n",remaining);

    n1000 = remaining/1000;
    remaining%=1000;
    n500 = remaining/500;
    remaining%=500;
    n100 = remaining/100;
    remaining%=100;
    n50 = remaining/50;
    remaining%=50;
    n20 = remaining/20;
    remaining%=20;
    n10 = remaining/10;
    remaining%=10;
    chain = remaining;
    printf("NOTES\n");
    printf("1k %d note(s)\n500 %d note(s)\n100 %d note(s)\n50 %d note(s)\n20 %d note(s)\n10 %d note(s)\nChain %d.",n1000
    ,n500,n100,n50,n20,n10,chain);

    printf("\n\t\tTHANK YOOOU!\n\t\tWE WILL HAPPY TO SERVE YOU AGAIN.");
}*/