// square * patterns  
/*#include<stdio.h>
void main()
{
  int height;
  printf("Enter the height of the square : ");
  scanf("%d",&height);

  for(int i = 1;i <= height;i++)
    {
      for(int j = 1;j <= height;j++)
        printf("* ");
      printf("\n");  
    }

    printf("\n\n");

    for(int i = 1;i <= height;i++)
      {
    if(i == 1 || i == height)
      {
        for(int j = 1;j <= height;j++)
          printf("* ");
      }
    else
      {
        for(int j = 1;j <= height;j++)
          {
            if(j == 1 || j == height)
              printf("* ");
            else
              printf("  ");  
          }
      }  
      printf("\n");
    }

    printf("\n\n");

    for(int i = 0;i < height;i++)
      {
        for(int j = 0;j < height;j++)
          {
            if(i == 0 || i == height-1 || i == height/2 || j == 0 || j == height-1 || j == height/2 )
              printf("* ");
            else
              printf("  ");  
          }
        printf("\n");  
      }
     return; 
}*/

