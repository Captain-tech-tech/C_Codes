/*#include <stdio.h>
int main()
{
    float num1,num2,result;
    char operator;
    printf("Enter your first number : ");
    scanf("%f",&num1);
    
    printf("Enter operator : ");
    scanf(" %c",&operator);

    printf("Enter your second numer : ");
    scanf("%f",&num2);

    if(operator == '+')
        {
            result=num1+num2;
                    printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);

        }
    else if(operator == '-')
        {
            result=num1-num2;
                    printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);

        }    

    else if(operator == '*')
        {
            result=num1*num2;
                    printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);

        }

    else if(operator == '/')
        {   if (num2 != 0)
              {
            result=num1/num2;
                    printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);

              }
            else { 
                printf("divison by zero is not possile.");
            }
        }

    else if(operator == '%')
        {
            result = (int)num1%(int)num2;
                    printf("%.2f %c %.2f = %.0f",num1,operator,num2,result);

        }
    
    else 
        {
            printf("Error found");
        }




            return 0;

}*/

/*#include <stdio.h>
void main()
{
    int num1=34,num2=12,num3=68;

    if(num1<=num2 && num1<=num3)
    {  if (num2<=num3)
         {
        printf("Sorted : %d,%d,%d\n",num1,num2,num3);
         }
        else
         { 
            printf("Sorted : %d,%d,%d",num1,num3,num2);
         }
    }
    else if(num2<=num1 && num2<=num3)
    {   if (num1<=num3)
         { 
            printf("Sorted : %d,%d,%d\n",num2,num1,num3);
         }
        else 
         {
            printf("Sorted : %d,%d,%d",num2,num3,num1);

         }
    }
    else 
    {   if (num1<=num2)
        {
            printf("Sorted : %d,%d,%d\n",num3,num1,num2);
        }
        else 
        {
            printf("Sorted : %d,%d,%d",num3,num2,num1);
        }
    }

}*/

/*#include <stdio.h>
void main()
{
    float order_price;
    int Is_Sunday;
    float delivery_charge;
    float discount_amount;
    float final_price;

    printf("Enter the order price : ");
    scanf("%f", &order_price);
    
    printf("Is it sunday or not (Enter 1 in case of sunday otherwise 0) : ");
    scanf("%d",&Is_Sunday);


    if (Is_Sunday == 1)
       { 
        printf("**********************************\n");
        printf("*******SPECIAL SUNDAY OFFER*******\n");
        printf("**********************************\n");
        delivery_charge = 0.0;
        if(order_price>=3000)
         {
            discount_amount = order_price*0.20;
         }
        else
        {
            discount_amount = 0.0;
        } 
      }
    else 
      { 
            if(order_price>=3000)
        {
           delivery_charge = 0.0;
        discount_amount = order_price*0.10;

        }   else if(order_price>=1500)

        {
             delivery_charge = 100.0;
             discount_amount = 0.0;

        }   else if(order_price>=1000)

        {
            delivery_charge = 200.0;
            discount_amount = 0.0;

        }   else

        {
            delivery_charge = 300.0;
            discount_amount = 0.0;
        }

      }
    final_price = order_price-discount_amount+delivery_charge;
     
    printf(" _______________________________________\n");
    printf("|                                       |\n");
    printf("|ORDER VALUE : %.2f\t\t\t|\n",order_price);
    printf("|DISCOUNT : %.2f\t\t\t|\n",discount_amount);\
    printf("|DELIVERY CHARGES : %.2f\t\t|\n",delivery_charge);
    printf("|FINAL PRICE : %.2f\t\t\t|\n",final_price);
    printf("|_______________________________________|");

}*/
/*#include <stdio.h>
void main()
{
    int performed_sit_ups = 0;
    int required_sit_ups = 10;

    while(performed_sit_ups<required_sit_ups)
       {
         performed_sit_ups++;

         printf("%d SIT UPS DONE! ---> ",performed_sit_ups);
         printf("%2d to go ...\n",required_sit_ups-performed_sit_ups);
       }

       printf("PUNISHMENT SERVED!\n");
       printf("WELL DONE SIRRR!");
       printf("%d,%d",performed_sit_ups,required_sit_ups);

}*/
/*#include <stdio.h>
void main()
{
    char exit_pressed = 'N';

    do
    {
        printf("Grand Theft Auto \n");
        printf("\tPlay\n");
        printf("\tSettinge\n");
        printf("\tExit\n");

        exit_pressed = 'y';
    } while (exit_pressed != 'y');

    return;
    
}*/
/*#include <stdio.h>
void main()
{
    for(int i = 1;i<=20;i++)
    {
        printf("%d ...AstaghfirULLAH...\n",i);
    }
    return ;
}*/
/*#include <stdio.h>
void main()
{
    int pin=343,attempts = 0;

start:
    printf("Enter pincode : ");
    scanf("%d",&pin);

    if (attempts < 3)

    {
        attempts++;
        goto start;

    }
    else 
    {
        printf("Account blocked!\n");
    }

    return;
}*/

/*#include <stdio.h>
void main()
{
  char contact = 'a';
   printf("Searching Contacts!");

   while (1) //infinite loop
    {

        printf("Current Contact : %c\n",contact);
           
           if(contact == 'Z')
           {
            printf("Contact Found! Now calling...\n");
            break;
           }

        contact++;   
    }


    return;

}*/