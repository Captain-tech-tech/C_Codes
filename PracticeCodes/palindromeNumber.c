/*#include <stdio.h>
void main()
{
    int digit,original_number=0,reverse_number=0,remainder;

    printf("Enter a number to check for palindrome : ");
    scanf("%d",&digit);

    original_number = digit;
     
      while(digit != 0)
      {
        remainder = digit%10;
        reverse_number = reverse_number*10 + remainder;
        digit /= 10;
      }
      printf("The reverse number is %d.\n",reverse_number);

      if(original_number == reverse_number)
       {
         printf("The number %d is a palindrome number.",original_number);
       }
       else
       {
         printf("The number %d is not a palindrome number.",original_number);
       }
       return;
}*/
