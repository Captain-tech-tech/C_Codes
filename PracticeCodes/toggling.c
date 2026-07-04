#include <stdio.h>
void main()
{
  int num;
  int n; // the bit position to toggle(0-indexed)
  int result;  // the integer after toggling

  printf("Enter an integer : ");
  scanf("%d",&num);

  printf("Enter the bit position to toggle(0-indexed) : ");
  scanf("%d",&n);

  //create the bitmask
  int mask = 1 << n;
  //toggle the nth bit using bitwise XOR
  result = num^mask;

  printf("Original number : %d.\n",num);
  printf("Number after toggling %dth bit : %d.\n",n,result);

  return;
}
