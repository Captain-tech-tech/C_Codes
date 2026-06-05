// reading numbers from user and then printing, also printing numbers address
/*#include <stdio.h>
void main()
{
  int n;
  printf("Enter how many digits you wanna enter in your array : ");
  scanf("%d",&n);

  int nums[n];

  for(int i = 0;i < n;i++)
    {
      scanf("%d",&nums[i]);
    }

    printf("\n\n");

  for(int i = 0;i < n;i++)
    {
      printf("%d\n",nums[i]);
    }  

    printf("\n\n");

    for(int i = 0;i < n;i++)
      {
        printf("The address of nums[%d] is %p.\n",i,&nums[i]);
      }

    return;
}*/

// sum,largest,smallest,average,digits counting
/*#include <stdio.h>
void main()
{
  int n;
  printf("Enter size of your array : ");
  scanf("%d",&n);

  printf("Now enter the values---->\n");

  int nums[n];
  for(int i = 0;i < n;i++)
    {
      scanf("%d",&nums[i]);
    }

  int sum = 0,largest = nums[0],digits = 0,smallest = nums[0];
  float average = 0;
  for(int i = 0;i < n;i++)
    {
      if(largest < nums[i])
        largest = nums[i];
      if(smallest > nums[i])
        smallest = nums[i];  
      sum += nums[i];
      digits++;
    }
    
    average = (float)sum/digits;

    printf("\nThe sum of the array's elements is %d.\nThe number of digits in the array is %d.\n",sum,digits);

    printf("The largest number in the array is %d.\nThe average of the elements of the array is %.2f.\n",largest,average);

    printf("The smallest number in the array is %d.\n",smallest);

    return;    
}*/

// finding a specific number in an array
/*#include <stdio.h>
void main()
{
  int nums[5] = {34,57,13,68,24};

  printf("For which element you are searching for : ");
  int n;
  scanf("%d",&n);

  int index = -1;

  for(int i = 0;i < 5;i++)
    {
      if(n == nums[i])
        {
          index = i;
        }
    }

  if(index != -1)
    {
      printf("\nThe number has been found at index number %d and is %d.\n",index,nums[index]);
    }
  else
    printf("\nThere is no such %d number in the array.\n",n);  
}*/

//  writing number in forward and reverse order
/*#include<stdio.h>
void main()
{
  int num;
  printf("Enter size od your array--->");
  scanf("%d",&num);

  int arr[num];

  for(int i = 0;i < num;i++)
  {
    scanf("%d",&arr[i]);
  }  

  printf("The array elements in its order are : ");
  for(int i = 0;i < num;i++)
    printf("%d  ",arr[i]);

    printf("\n");

  printf("The array elements in reverse order are : ");
  for(int i = num-1;i >= 0;i--)
    printf("%d  ",arr[i]);
  
    return;
}*/

// simple code intializing array with even number
/*#include<stdio.h>
void main()
{
  int num[6];
  for(int i = 0;i < 6;i++)
    {
      num[i] = 2+(2*i);
    }
  for(int i = 0;i < 6;i++)
    printf("%d  ",num[i]);
    
    return;
}*/

// printing array elements in ascending and descending order and finding the second largest number
/*#include <stdio.h>
void main()
{
    int num[100];
    int size,temp = 0;
    printf("Enter size of your array : ");
    scanf("%d", &size);

    for(int i = 0;i < size;i++)
      {
        printf("Element %d : ",i+1);
        scanf("%d", &num[i]);
      }

      printf("\n");
    for(int i = 0;i < size;i++) 
      {
        printf("%d ",num[i]);
      } 

      printf("\n");
      for(int i = 0;i < size-1;i++)
        {
            for(int j = 0;j < size-i-1;j++)
              {
                if(num[j] > num[j+1])
                  {
                     temp = num[j];
                     num[j] = num[j+1];
                     num[j+1] = temp;
                  }
              }
        }

        printf("\n");
        printf("The numbers in ascending order are ----> ");
        for(int i = 0;i < size;i++)
          {
            printf("%d ",num[i]);
          }
          
          printf("\n");
          printf("The numbers in descending order are ----> ");
          for(int i = size-1;i >= 0 ;i--)
          {
            printf("%d ",num[i]);
          }

          printf("\nThe second largest number is %d.\n",num[size-2]);

          printf("\n\nSUCCESSFULLY CODE ENDED FINALLY!");

          return;
}*/

// finding contestant with maximum votes
/*#include<stdio.h>
void main()
{
  int votes[6] = {343,643,756,798,353,896};
  char name[6] = {'A','S','U','H','K','R'};

  int winner_index = 0;

  for(int i = 1;i <= 6;i++)
    {
      if(votes[i] > votes[winner_index])
      winner_index = i;
    }

    printf("Candidate %c won with %d",name[winner_index],votes[winner_index]);

    return;
}*/

//finding stock number in a market
/*#include <stdio.h>
int main()
{
int stock[5] = {12, 4, 8, 0, 6};
printf("Checking inventory...\n");
for (int i = 0; i < 5; i++)
{
if (stock[i] == 0)
{
printf("Item %d: OUT OF STOCK\n", i + 1);
}
else
{
printf("Item %d: %d left\n", i + 1, stock[i]);
}
}
return 0;
}*/

//beautiful code
/*#include<stdio.h>
void main()
{
  long num[12] = {{23},{53},{123},{35},{23},{24},{36},{24},{365},{24},{32},{98}};//if {23,35,23,54} in entered only 23 is shown in output
  for(int i=0;i < sizeof(num)/sizeof(num[0]);i++)
    printf("%d   ",num[i]);

    return;
}*/

//a C program to move all zero elements to the end of a 1D 
//array while maintaining the relative order of non-zero elements
/*#include <stdio.h>
int main()
 {
    int arr[] = {0, 1, 0, 3, 12, 0, 5, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0; //counter for non-zero elements(it counts number of non-zero digits)

    // Iterate through the array and move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill the remaining positions with zeros
    while (count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/

//Write a C program to merge two sorted arrays into a third sorted array.
/*#include<stdio.h>
int main()
{
  int arr1[] = {34, 64, 68, 34, 97, 24, 12};
  int arr2[] = {65, 86, 34, 68, 35, 76, 35};
  int arr3[1000]; // Changed to int array for consistency

  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);
  int size = size1 + size2;

  // Merge arrays
  for (int i = 0; i < size1; i++)
  {
    arr3[i] = arr1[i];
  }
  for (int j = 0; j < size2; j++)
  {
    arr3[size1 + j] = arr2[j];
  }

  printf("The merged elements in third array are --->\n");
  for(int i=0;i<size1+size2;i++)
    {
      printf("%d  ",arr3[i]);
    }
  // Sort the merged array using Bubble Sort
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr3[j] > arr3[j + 1])
      {
        // Swap elements
        int temp = arr3[j];
        arr3[j] = arr3[j + 1];
        arr3[j + 1] = temp;
      }
    }
  }

  printf("\nThe sorted array is ---->\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr3[i]);
  }

  return 0;
}*/

// deleting Element, write a C program to delete an element at a specified position from an array. Handle invalid positions.
/*#include<stdio.h>
void main()
{
  int n;
  printf("Enter the size of your array : ");
  scanf("%d",&n);

  int arr[n];
  printf("Enter elements in your array ---->\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

    printf("\n\nThe original array is ---->\n");
    for(int i=0;i<n;i++)
      {
        printf("%d  ",arr[i]);
      }
    int position;
    printf("\nEnter the position at which you want to delete the number : ");
    scanf("%d",&position);

    for(int i = position-1;i<n-1;i++)
      arr[i] = arr[i+1];

      n--;

      printf("\nThe modified array is ---->\n");
      for(int i=0;i<n;i++)
        {
          printf("%d ",arr[i]);
        }

        return;

}*/

// C code to find the frequency of each element in the array
/*#include<stdio.h>
void main()
{
  int size;
  printf("ENter size of your array : ");
  scanf("%d",&size);

  int arr[size];

  printf("Enter elements of your array ---->");
  for(int i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }

    printf("\nYour array elements are ----->");
    for(int i=0;i<size;i++)
      {
        printf("%d  ",arr[i]);
      }

    printf("\n");
    int count;
    for(int i=0;i<size;i++)
      {
        count = 0;
        for(int j=0;j<size;j++)
            if(arr[i]==arr[j])
              count++;
        printf("The element %d occurs %d times\n",arr[i],count);  
      }

      return;
}*/

// finding the second largest number
/*#include<stdio.h>
void main()
{
  int arr[10]={23,456,578,345,56,345,67,345,412,756};

  int largest=arr[0],second,temp;
    
   for(int i=0;i<10;i++)
     {
      if(largest<arr[i])
        {
          second=largest;
          largest=arr[i];
        }
     }

     printf("The largest number is %d and the second largest is %d.",largest,second);
}*/

// for sorting even and odd sepaaratly, this code is wrong, also make it correct
/*#include<stdio.h>
int main()
{
  int n,temp=0;printf("Enter the size of your array : ");scanf("%d",&n);

  int arr[n];
  printf("Enter the elements of your array ----> ");
  for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);

  for(int i=0;i<n;i++)
   {
    if(arr[i])
    {
     for(int j=n-1;j>i;j--)
      {
       if(arr[j]%2==0)
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;       
      }
    } 
   } 

  printf("The sorted array is \n");
  for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
  return 0;
}*/




