// Ascii codes for 0 to 9 are 48 to 57

// a C code to Take a 2x2 matrix from the user and find its determinant 
/*#include<stdio.h>
void main()
{
    int matrix[2][2];

    for(int i = 0;i < 2;i++)
      {
        for(int j = 0;j < 2;j++)
          scanf("%d",&matrix[i][j]);
      }

    for(int i = 0;i < 2;i++)
      {
        for(int j = 0;j < 2;j++)
          printf("%d ",matrix[i][j]);
        printf("\n");  
      }      
    // long for determinant to store potentially large value
    long determinant = (long)(matrix[0][0]*matrix[1][1])-(long)(matrix[0][1]*matrix[1][0]);
    
    printf("The determinant of the matrix is %d.\n",determinant);
}*/

// a C code to Take a matrix from the user (take number of rows and columns also from user) , 
// then take a number from the user and output how many multiples of that number are in that matrix .
/*#include<stdio.h>
void main()
{
    int row,column;
    printf("Enter number of rows for your matrix : ");
    scanf("%d",&row);
    printf("Enter number of columns for your matrix : ");
    scanf("%d",&column);

    int matrix[row][column];

    for(int i = 0;i < row;i++)
      {
        printf("Enter %d element in your %d row : \n",column,i+1);
        for(int j = 0;j < column;j++)
          scanf("%d",&matrix[i][j]);
      }

    printf("\n\nThe matrix is ---->\n");  
    for(int i = 0;i < row;i++)
      {
        for(int j = 0;j < column;j++)
        printf("%d ",matrix[i][j]);
        printf("\n");
    }
      
        int x,time=0;   
        printf("Enter the number whose frequency(repeation) you want to find : ");  
        scanf("%d",&x);

    for(int i = 0;i < row;i++)
      {
        for(int j = 0;j < column;j++)
        {
            if(x == matrix[i][j])
              time++;
        }
      }
        
      printf("\n\nThe number %d is present %d times in the matrix.\n",x,time);
}*/

// a C code to Take a matrix from the user (take number of rows and columns also from user) ,
//calculate the sum of all rows and also the sum of all columns … then check which is greater .
/*#include <stdio.h>
int main()
 {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<rows;i++) 
    {
        for (int j=0; j < cols;j++) {
            printf("Enter element at [%d][%d] : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int totalRowSum = 0;
    printf("\n\nRow Sums:\n\n");
    for (int i=0; i < rows;i++) 
    {
        int currentRowSum = 0;
        for (int j=0; j < cols;j++) {
            currentRowSum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n",i + 1,currentRowSum);
        totalRowSum += currentRowSum;
    }

    int totalColSum = 0;
    printf("\n\nColumn Sums:\n\n");
    for (int j=0; j < cols;j++) {
        int currentColSum = 0;
        for (int i=0; i < rows;i++) {
            currentColSum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n",j+1,currentColSum);
        totalColSum += currentColSum;
    }

    printf("\n\nComparison:\n\n");
    if (totalRowSum > totalColSum)
        printf("The total sum of all rows (%d) is greater than the total sum of all columns (%d).\n", totalRowSum, totalColSum);
    else if (totalColSum > totalRowSum) 
        printf("The total sum of all columns (%d) is greater than the total sum of all rows (%d).\n", totalColSum, totalRowSum);
    else 
        printf("The total sum of all rows (%d) is equal to the total sum of all columns (%d).\n", totalRowSum, totalColSum);

    return 0;
}*/

// reading and writing of the matrix transpose
/*#include<stdio.h>
int main()
{
  int r,c;printf("Enter the number of rows and columns of your matrix! ");scanf("%d %d",&r,&c);
  
  int matrix[r][c];
  for(int i=0;i<r;i++)
   {
    printf("Enter elements in your %d row--->",i+1);
     for(int j=0;j<c;j++)
      scanf("%d",&matrix[i][j]);
   }

  printf("\nReading\n");
  for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
     printf("%d ",matrix[j][i]);
    printf("\n"); 
   } 

  int temp=0;
  printf("\nWriting\n");
  for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
     {
       if(i>=j)
       { 
       temp=matrix[i][j];
       matrix[i][j]=matrix[j][i];
       matrix[j][i]=temp; 
       }
     }
   } 
  for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
     printf("%d ",matrix[i][j]);
    printf("\n"); 
   } 

  return 0; 
}*/









