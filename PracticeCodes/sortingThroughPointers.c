// 28 Create a program that uses pointers to sort an array.
/*#include<stdio.h>
void sort(int *ptr, int n)
{
    int *ptr1, temp;

    for(int i = 0; i < n; i++)
    {
        ptr1 = ptr;   // reset ptr1 at start of each outer loop

        for(int j = i; j < n; j++)
        {
            if(*ptr > *ptr1)
            {
                temp = *ptr;
                *ptr = *ptr1;
                *ptr1 = temp;
            }
            ptr1++;   // move inner loop pointer
        }

        ptr++;        // move ptr to next element of the outer loop
    }
}

int main()
{
    int n;
    printf("Enter the size of your array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in your array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    sort(ptr, n);

    printf("Your sorted array is : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0; 
}*/

