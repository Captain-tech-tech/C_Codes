// 1
/*#include<stdio.h>
void main()
{
    int n;printf("Enter size of the array : ");scanf("%d",&n);

    int list[n];
    printf("Enter values in your array --->\n");
    for(int i=0;i<n;i++)
      {
        scanf("%d",&list[i]);
      }

      
    int seg=0;
    for(int i=0;i<n;i++)
      {
        if(list[i]!=list[i+1])
          seg++;
      }  


    printf("\nThe original array is --->\n");
    for(int i=0;i<n;i++)
      {
        printf("%d  ",list[i]);
      }
    printf("\nThere are %d segments in your original array.\n",seg); 
    

    int temp=seg;  
    for(int i=0;i<n;i++)
      {
        int possible=0;

        if(i>0  &&  list[i]!=list[i-1])
          possible++;

        if(i>0  &&  list[i]!=list[i+1])
          possible++;
          
        if(i>0 && i<n-1 && list[i-1]!=list[i+1])
        {
            if(possible==2)
              possible=1;
        }  

       int newsegment=seg-possible;

       if(newsegment<temp)
        temp=newsegment;

      }

      printf("\nThe manimum possible segment with one value change will be %d.\n",temp);
      for(int i=0;i<n;i++)
        {
            printf("%d  ",list[i]);
        }

}*/




// 2
/*#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void inputArray(int* arr, int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int minimizeCA(int* arr, int n, int k) {
    int minC = INT_MAX;

    for (int i = 0; i < n; i++) {
        int T = arr[i]; // Target value
        int need = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] != T)
                need++;
        }

        if (need <= k)
            return 0; // Perfect — all equal → c(a) = 0
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int low = arr[i];
            int high = arr[j];
            int need = 0;

            for (int x = 0; x < n; x++) {
                if (arr[x] < low || arr[x] > high)
                    need++;
            }

            if (need <= k) {
                int range = high - low;
                if (range < minC)
                    minC = range;
            }
        }
    }

    return minC;
}

void displayResult(int result) {
    printf("%d", result);
}

int main() {
    int n, k;
    printf("Enter the size(n) of the array and k value ---->\n");
    scanf("%d %d", &n, &k);

    int* arr = (int*)malloc(n * sizeof(int));
   
    inputArray(arr, n);

    int result = minimizeCA(arr, n, k);
    displayResult(result);

    free(arr);
    return 0;
}*/




// 3
/*#include <stdio.h>
#include <stdbool.h>

int relation(int* A_start, int* A_end, int* B_start, int* B_end)
{
    int* p;

    bool A_contains_B = true;
    p = B_start;
    while (p != B_end) {
        bool insideA = false;
        int* x = A_start;
        while (x != A_end) {
            if (x == p) { insideA = true; break; }
            x++;
        }
        if (x == A_end && p == B_end) insideA = true; 
        if (!insideA) { A_contains_B = false; break; }
        p++;
    }
    if (A_contains_B) return 2;

    bool B_contains_A = true;
    p = A_start;
    while (p != A_end) {
        bool insideB = false;
        int* x = B_start;
        while (x != B_end) {
            if (x == p) { insideB = true; break; }
            x++;
        }
        if (x == B_end && p == A_end) insideB = true;
        if (!insideB) { B_contains_A = false; break; }
        p++;
    }
    if (B_contains_A) return 3;

    bool overlap = false;
    int* a = A_start;
    while (a != A_end) {
        int* b = B_start;
        while (b != B_end) {
            if (a == b) { overlap = true; break; }
            b++;
        }
        if (b == B_end && a == B_end) if (a == b) overlap = true;
        if (overlap) break;
        a++;
    }
    if (overlap) return 1;

    return 0;
}


void transform(int* A_start, int* A_end, int* B_start, int* B_end)
{
    int rel = relation(A_start, A_end, B_start, B_end);

    int* left = A_start;
    int* right = A_end;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

   
    if (rel == 1 || rel == 2 || rel == 3)
    {
        int* non1 = NULL;
        int* non2 = NULL;

        int* p = B_start;
        while (p != B_end && !(p >= A_start && p <= A_end)) {
            if (non1 == NULL) non1 = p;
            non2 = p;
            p++;
        }

        while (p != B_end && (p >= A_start && p <= A_end)) {
            p++;
        }
        while (p != B_end) {
            if (non1 == NULL) non1 = p;
            non2 = p;
            p++;
        }

        if (non1 == NULL) return; 

        int* last = non2;
        int last_value = *last;

        int* q = last;
        while (q != non1) {
            int* prev = q - 1;
            *q = *prev;
            q--;
        }
        *non1 = last_value;
        return;
    }

    int* last = B_end;
    int last_val = *last;

    int* p = B_end;
    while (p != B_start) {
        int* prev = p - 1;
        *p = *prev;
        p--;
    }
    *B_start = last_val;
}


bool checkIntegrity(int* base, int* end)
{
    if (base > end) return false;

    int* p = base;
    while (p <= end) p++;

    return true;
}

int main()
{
    int arr[] = {2, 5, 7, 9, 1, 4, 8};
    int* base = arr;
    int* end  = arr + 6;

    int* A_start = arr + 1;
    int* A_end   = arr + 4;

    int* B_start = arr + 3;
    int* B_end   = arr + 6;

    transform(A_start, A_end, B_start, B_end);

    printf("Final array: ");
    int* p = base;
    while (p <= end) {
        printf("%d ", *p);
        p++;
    }
}*/




