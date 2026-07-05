/*#include<stdio.h>
#include<stdbool.h>
int is_amstrong(int num)
{
  int amstrong=0,remainder=0;
  int temp=num;

  while(temp!=0)
   {
    remainder=temp%10;
    amstrong+=remainder*remainder*remainder;
    temp/=10;
   }

  if(amstrong==num)
   return true;
  else
   return false;  
}
int main()
{
  int n;printf("Enter a number : ");scanf("%d",&n);

  int a=is_amstrong(n);

  if(a)
   printf("The number %d is an Amstrong Number.\n",n);
  else
   printf("The number %d is not an Amstrong Number.\n",n); 

  return 0; 
}*/


/*#include <stdio.h>
#include <stdbool.h>
int is_amstrong(int num)
{
    int temp1 = num, count = 0;
    while(temp1 != 0)
    {
        count++;
        temp1 /= 10;
    }

    int temp2 = num, remainder = 0, amstrong = 0;
    while(temp2 != 0)
    {
        remainder = temp2 % 10;

        int power = 1;
        for(int i = 0; i < count; i++)
            power *= remainder;

        amstrong += power; 

        temp2 /= 10; 
    }

    if(amstrong == num)
        return true;
    else
        return false;  
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int a = is_amstrong(n);

    if(a)
        printf("%d is an Amstrong Number.\n", n);
    else
        printf("%d is not an Amstrong Number.\n", n); 

    return 0; 
}*/




