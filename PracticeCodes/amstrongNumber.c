// Amstrong number 
/*#include <stdio.h>
void main()
{
  int num,originalnum = 0,remainder = 0,result = 0;
  printf("Enter a three digit number : ");
  scanf("%d",&num);
  originalnum = num;
  while(num != 0)
    {
      remainder = num % 10;
      result += remainder*remainder*remainder;
      num /= 10;
    }
    if(result == originalnum)
      {
        printf("%d is an amstrong number.",originalnum);
      }
      else 
      {
        printf("%d is not an amstrong number.",originalnum);
      }
      return;
}*/
/*#include <stdio.h>
void main()
{
  int num,real_num = 0,remainder = 0,result = 0,digit = 0;

  printf("Enter an amstrong number : ");
  scanf("%d",&num);

  real_num = num;
  while(num != 0)
     {
       num /= 10;
       digit++;
     }
int original = 0;
original=real_num;
  while(real_num != 0)
    {
      int power = 1;
      for(int i=0;i<digit;i++)
        {
          remainder = real_num % 10;
          power*=remainder;
        }
          result+=power;
          real_num /= 10;
    }   

    if(result == original)
      {
        printf("%d is an amstorng number.",original);
      }
    else
      {
        printf("%d is not amstrong number.",original);
      }
    return;
}*/

