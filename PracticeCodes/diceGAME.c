
//dice game 
/*#include <stdio.h>    // for standard input and output
#include <stdlib.h>  // library used for generating random number
#include <time.h>    // library used for time
#include <windows.h>
void main()
{
    int num;
    srand(time(0));  // if we put 2 or 3 or any other number in placr of time(0) it will give us a specfic value always.
    num = rand();
    printf("num : %d",num);
    

    int numb;
    srand(time(0));
    numb = rand()%10; // %10 is used to get last digit, similarly % 100 is used to get last two digit and so on. it is used to limit answer range.
    printf("\nnumb : %d",numb);


    int dice = 0,score = 0;
    while(dice != 6)
      {
        Sleep(1);
        srand(time(0));
        dice = rand() % 7;

       if(dice != 0 && dice !=6)
           {
            printf("\nDice : %d\n",dice);
           
            score += dice;
           }
      }
      printf("\nTotal Score : %d",score);
}*/
