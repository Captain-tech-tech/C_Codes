// ABC patterns
/*#include<stdio.h>
void main()
{
  char x;
  printf("Enter upto which character you want to print : ");
  scanf(" %c",&x);

  for(char i = 65;i <= x;i++)
    {
      printf("#");

      for(char j = 65;j <= i;j++)
        printf("%c",j);

      printf("\n");  
    }

    printf("\n\n");

  for(char i = 65;i <= x;i++)
    {
      for(char j = x;j > i;j--)
        printf(" ");

      for(char j = 65;j <= i;j++)
        printf("%c",j);

      for(char j = i;j > 65 ;j--)
        printf("%c",j-1);
        
      printf("\n");  
    }  
}*/
