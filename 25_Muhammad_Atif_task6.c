
// lcm is the smallest number which is divisible by both the numbers
/*#include<stdio.h>
void main()
{
    int a,b;printf("Enter two number---> ");scanf("%d %d",&a,&b);

    int max=a;
    if(max<b)
      max=b;

    while(1)
     {
        if(max%a==0 && max%b==0)
          break;
          max++;
     }
    printf("The lcm of %d and %d is %d.",a,b,max);
}*/

/*#include <stdio.h>
int main() 
{
    float num1, num2, result;
    char operator;
    char yes = 'y';

    while (yes == 'y' || yes == 'Y')
     {
        printf("Enter your first number: ");
        scanf("%f", &num1);
        
        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);

        printf("Enter your second number: ");
        scanf("%f", &num2);
        
        // Use a switch statement for more readable code.
            switch (operator)
             {
                case '+':

                  result = num1 + num2;
                    printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                    break;
                case '-':
                    result = num1 - num2;
                    printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                    break;
                case '*':
                    result = num1 * num2;
                    printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                    break;
                case '/':
                    if (num2 != 0)
                       {
                          result = num1 / num2;
                          printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                       }
                     else 
                       {
                          printf("Error: Division by zero is not possible.\n");
                       }
                  break;
                case '%':
                    if ((int)num2 != 0) 
                      {
                          result = (int)num1 % (int)num2;
                          printf("%d %% %d = %.0f\n", (int)num1, (int)num2, result);
                      }
                       else 
                      {
                          printf("Error: Modulo by zero is not possible.\n");
                      }
                    break;
                default:
                          printf("Error: Invalid operator.\n");
                    break;
        }

        printf("Do you want another calculation? (y/n): ");
               scanf(" %c", &yes);
    }

    return 0;
}*/

//passengers question
/*#include<stdio.h>
void main()
{
    int seats=0,pesdestrian=1,cost=0;

    while(1)
      {
        if(seats==15)
          {
            printf("Bus is full. Booking closed!\nTotal Revenue Collected : %d",cost);
            break;
          }

        if(pesdestrian%4==0)
          {
            cost+=60;
            seats++;
            printf("Passanger booked seat # %d, Total revenue : %d\n",seats,cost);
          }  

        pesdestrian++;  
      }    
}*/

