// printing different number and * patterns
/*#include <stdio.h>
void main()
{
  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  for(int i = 0;i < number;i++)
    {
      for(int j = 0;j < i;j++)
       printf(" ");
      for(int j = 0;j < number;j++)
       printf("%d",i);
       printf("\n");
    } 
}*/
/*#include<stdio.h>
void main()
{
  int n;
  printf("Enter height of triangle : ");
  scanf("%d", &n);
  for(int i = 0;i < n;i++)
    {
      for(int j = 0;j < n;j++)
        {
          if(j >= i)
            printf("%d", i);
          else 
            printf(" ");  
        }
      printf("\n");   
    }
   return; 
}*/
/*#include <stdio.h>
void main()
{
  int n;
  printf("Enter height of triangle : ");
  scanf("%d", &n);

  for(int i = 0;i < n;i++)
    {
      for(int j = 0;j < n;j++)
        {
          if(i==0 || j==0 || i==n-1 || j==n-1)
          printf("*");
          else
          printf(" ");
        }
      printf("\n");  
    }
    return;
}*/



/*#include<stdio.h>
int main()
{
  int n;printf("Enter the size of your rhombus : ");scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<2*n-1;j++)
    {
      if(j<n-i-1)
       printf(" ");
      else
       printf("*"); 
    }
    printf("\n");
  }
  return 0;
}*/

/*#include<stdio.h>
int main()
{
  int n;printf("Enter the height of your parallogram : ");scanf("%d",&n);

  int m;printf("Enter the height of the overall building : ");scanf("%d",&m);
  for(int k=0;k<m;k++)
  {  
  for(int i=1;i<n;i++)
   {
    for(int j=0;j<=n-i;j++)
     printf(" ");

    for(int j=0;j<n;j++)
     printf("*"); 
     
    printf("\n"); 
   }


  for(int i=0;i<n;i++)
   {
    for(int j=i;j>=0;j--)
     printf(" ");
    for(int j=0;j<n;j++)
     printf("*");
    printf("\n");  
   } 
  }
   

  return 0;
}*/

/*#include<stdio.h>
int main()
{
  int n;printf("Enter the height of your diamond : ");scanf("%d",&n);
  
  // 1
  for(int i=1;i<n;i++)
   {
    for(int j=0;j<n-i;j++)
     printf(" ");
    for(int j=0;j<2*i-1;j++)
     printf("*");
     printf("\n"); 
   }
  for(int i=n-2;i>0;i--)
   {
    for(int j=0;j<n-i;j++)
     printf(" ");
    for(int j=0;j<2*i-1;j++)
     printf("*");
     printf("\n"); 
   } 


// 2
  for(int i=1;i<n;i++)
   {
    for(int j=0;j<n-i;j++)
     printf(" ");
    for(int j=1;j<=i;j++)
     printf("%d",j);
    for(int j=i-1;j>=1;j--)
     printf("%d",j); 
     printf("\n"); 
   }
  for(int i=1;i<=n;i++)
   {
    for(int j=i+1;j>=1;j--)
     printf(" ");
    for(int j=1;j<n-i;j++)
     printf("%d",j);
    for(int j=n-2-i;j>=1;j--)
     printf("%d",j);
    printf("\n");   
   }

// 3
printf("Write the ABC pattern in this way!"); 
  return 0;
}*/



