//  triangle * patterns
/*#include <stdio.h>
void main()
{
  int height;
  printf("Enter the height of the triangle : ");
  scanf("%d", &height);
  // 1
  for(int i = 1;i <= height;i++)
    {
      for(int j = 1;j <= i;j++)
        {
          printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
  // 2
  for(int i = 1;i <= height;i++)
    {
      for(int j = height;j >= i;j--)
        {
          printf("*");
        }
        printf("\n");
    }  

    printf("\n\n");
  // 3
  for(int i = 1;i <= height;i++)
     {
      for(int j = 1;j < i;j++)
        printf(" ");

      for(int j = i;j <= height;j++)
        printf("*"); 
        
      printf("\n");  
     }  

     printf("\n\n");
    // 4 
     for(int i = 1;i <= height;i++)
       {
        for(int j = height;j > i;j--)
          printf(" ");

        for(int j = 1;j <= i;j++)
          printf("*");
         
        printf("\n");  
       }

       printf("\n\n");

     for(int i = 1;i <= height;i++)
       {
        for(int j = height;j > i;j--)
          printf(" ");

        for(int j = 1;j <= 2*i-1;j++)
          printf("*");
        
      printf("\n");  
    }

    printf("\n\n");
    // 5
    for(int i = 1;i <= height;i++)
    {
      if(i == 1 || i == height)
        {
          for(int j = 1;j < height;j++)
            printf("*");
        }
      else
      {  
      for(int j = 1;j <= height;j++)
        {
          if(j == 1 || j == height)
            printf("*");
          else
            printf(" ");  
        }  
      }      

        printf("\n");
    }

    printf("\n\n");
    // 6
    for(int i = 1;i <= height;i++)
    {
      for(int j = height;j > i;j--)
        printf("  ");

      for(int j = 1;j <= 2*i-1;j++)
        {
          if(j%2 != 0)
            printf("* ");
          else
            printf("# ");  
        }
      printf("\n");  
    }

    return;
}*/

