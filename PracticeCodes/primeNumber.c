/*#include<stdio.h>
#include<stdbool.h>
int is_prime(int num)
{
  int flag=0;
  for(int i=2;i<num;i++)
   {
    if(num%i==0)
     flag=1;
   }

  if(flag==0)
   return true;
  else if(flag==1)
   return false;  
}
int main()
{
  int num;printf("Enter a number : ");scanf("%d",&num);

  int n=is_prime(num);

  if(n)
   printf("%d is a prime number.\n",num);
  else
   printf("%d is not a prime number.\n",num);
   
  return 0; 
}*/

// 19
/*#include<stdio.h>
int even_sum(int n,int m)
{
  int sum=0;
  for(int i=n;i<=m;i++)
    {
      if(i%2==0)
       sum+=i;
    }

  return sum;  
}
int main()
{
  int i,j;printf("Enter two numbers : ");scanf("%d %d",&i,&j);

  int sum=even_sum(i,j);

  printf("The sum is %d.\n",sum);

  return 0;
}*/
