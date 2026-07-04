
// queston 3
/*#include <stdio.h>
void main()
{
    int upto_digit, digit_1=0, digit_2=1,next_term=0;
    
    label:
    printf("Upto how many digit you want to print fibonacci sequence : ");
    scanf("%d",&upto_digit);
     
    if(upto_digit <= 0)
      {
        printf("Invalid input, enter a number greater than 0.\n");
        goto label;
      }
    else if(upto_digit == 1)  
      {
        printf("The first number is %d\n",digit_1);
      }
    else if(upto_digit == 2)
      {
        printf("The first two numbers are %d,%d\n",digit_1,digit_2);
      }  
    else 
    {
        printf("The numbers are %d,%d",digit_1,digit_2);
        for(int i = 3; i <= upto_digit ; i++)
       { 
        next_term = digit_1+digit_2;
        printf(",%d",next_term);
        digit_1 = digit_2;
        digit_2 = next_term;

       }
        printf(" which are first %d digit of fibonacci sequence",upto_digit);

    }  
}*/
