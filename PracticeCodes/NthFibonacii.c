
/*#include <stdio.h>
void main()
{
    int previous1, previous2, current;
    int counter, nThfibronacci;
    printf("Enter the first two fibonacci numbers : ");
    scanf("%d %d",&previous1,&previous2);

    printf("The first two fibonacci numbers are %d and %d.\n",previous1,previous2);
    printf("Enter the position of the desired fibonacci number : ");
    scanf("%d",&nThfibronacci);

    if(nThfibronacci == 1)
      current = previous1;
      else if(nThfibronacci == 2)
      current = previous2;
      else {
        counter = 3;
        while(counter <= nThfibronacci)
           {
            current = previous2+ previous1;
            previous1=previous2;
            previous2=current;
            counter++;
           }
      }

      printf("THe fibonacci number at position %d is %d\n",nThfibronacci,current);
}*/
