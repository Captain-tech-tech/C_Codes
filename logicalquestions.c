// counting number of digits in a number.
/*#include <stdio.h>
void main()
{
    int number,real_number;
    printf("Enter a number : ");
    scanf("%d",&number);

    real_number = number;
    int counter = 0;
    while(number != 0)
       {
        number /= 10;
        counter++;
       }
    printf("The digits in Number %d are %d.",real_number,counter);   
}*/

// simple output code
/*#include<stdio.h>
int main()
{
   char ch=6;
   float a=2;
   int b=3.5;
   printf("ch : %c, a : %.3f, b : %d\n",ch,a,b);    
   return 0;    
}*/

//program to print english alphabets
/*#include <stdio.h>
int main()
{
   for(int i = 65;i <= 90;i++)
    printf(" %c ",i);
  printf("\n");
  for(int j = 97;j <=122;j++)
    printf(" %c ",j); 
}*/

//checking a number that it is prime or not
/*#include <stdio.h>
void main()
{
    int num,i,flag = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i = 2;i <= num/2;i++)
       {
        if(num%i == 0)
         {
            flag = 1;
            break;
         }
       }
    if(flag == 0)
      {
        printf("%d is a prime number.",num);
      }   
    else 
      {
        printf("%d is not a prime number.",num);
      }  

}*/

// printing prime numbers between two numbers
/*#include <stdio.h>
void main()
{
    int lowervalue,uppervalue,flag;
    printf("Enter lower value : ");
    scanf("%d",&lowervalue);
    printf("Enter upper value : ");
    scanf("%d",&uppervalue);

    printf("\n\n``PRIME NUMBER`` Between %d and %d are :",lowervalue,uppervalue);

    while(lowervalue <= uppervalue)
      {
        flag = 0;
        for(int i = 2;i <= lowervalue/2;i++)   // can not start with 1 b/c every number is divisible by 1.
        {
            if(lowervalue%i == 0)
            {
                flag = 1;
                break;
            }    
        } 
        if(flag == 0)
          {
            printf(" %d ",lowervalue);
          }
        lowervalue++;  
      }
}*/

// c program to check whether a character is an alphabet or not
/*#include <stdio.h>
void main()
{
    char character;
    printf("Enter an alphabet : ");
    scanf(" %c", &character);

    if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
    // A=65,Z=90,a=97,z=122. The above A,Z,a,z can be replaced with there ascii code.
     {
        printf("%c is an Alphabet.",character);
     }
     else 
     {
        printf("%c is not an alphabet.",character);
     } 
}*/

// ispunct function from ctype library
/*#include <stdio.h>
#include <ctype.h>//ispunct

int main() {
    char test[] = "Hello, world! 123 (test).";

    for (int i = 0; test[i] != '\0'; i++) {
        if (ispunct(test[i])) {    // check if it's punctuation
            printf("'%c' is punctuation.\n", test[i]);
        }
    }

    return 0;
}*/

//c program to check whether a number is +ive or -ive.
/*#include <stdio.h>
void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    if(number < 0)
      {
        printf("%d is -ive number.",number);
      }
    else 
      {
        printf("%d is a +ive number.",number);
      }  
}*/

//c program to check for leap year
/*#include <stdio.h>
void main()
{
    int year;
    printf("Enter  the year : ");
    scanf("%d", &year);

    if(year%4 == 0)
      {
        printf("%d is a leap year.",year);
      }
    else
      {
        printf("%d is not a leap year.",year);
      }  
}*/

//c program to check whether a character is a vowel or consonant.
/*#include <stdio.h>
void main()
{
    char ch;
    int lowercase,uppercase;
    printf("Enter a character : ");
    scanf(" %c", &ch);

    lowercase = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');// if character is vowel 1 is
                                                                     // stored in lowercase.
    uppercase = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');    
    
    if(lowercase || uppercase)
      printf("Vowel!");
    else
      printf("Consonant!");  
}*/

//c program to swap two numbers without using third variable and with using third variable.
/*#include <stdio.h>
void main()
{
    int x,y;
    printf("Enter x value : ");
    scanf("%d", &x);
    printf("Enter y value : ");
    scanf("%d", &y);

    // using + and -
    x = x+y;  // let x = 10,y = 6. so, ------> x=10+6=16
    y = x-y;  // y=16-6=10
    x = x-y;  //x=16-10=6
    
    printf("\n Value of x is %d.",x);
    printf("\n Value of y is %d.",y);

    int a,b;
    printf("\nEnter a value : ");
    scanf("%d", &a);
    printf("Enter b value : ");
    scanf("%d", &b);
    //using * and /
    a = a*b;  // let a=10,b=6, so,------> a=10*6=60
    b = a/b;  // b=60/6=10
    a = a/b;  // a=60/10=6

    printf("\n Value of a is %d.",a);
    printf("\n Value of b is %d.",b);

    // swaping while using third variable as well
    int c,d,temp = 0;
    printf("\nEnter c value : ");
    scanf("%d", &c);
    printf("Enter d value : ");
    scanf("%d", &d);

    temp=c;  
    c=d;
    d=temp;

    printf("\n Value of c is %d.",c);
    printf("\n Value of d is %d.",d);

    return;
}*/

// c program to print ascii code of a character.
/*#include <stdio.h>
void main()
{
    char ch;
    printf("Enter your character : ");
    scanf(" %c", &ch);
    printf("The ascii code of %c is %d.",ch,ch);
}*/

//checking a number is even or odd without using == operator
/*#include <stdio.h>
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check the least significant bit using bitwise AND with 1
    // If the result is 0, the number is even.
    // If the result is non-zero (1), the number is odd.
    if ((num & 1) == 0) { // This still uses ==, so we need to refine.
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}*/
/*#include <stdio.h>
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If (num & 1) evaluates to 0, it means the number is even.
    // The '!' operator negates this, making '!(num & 1)' true for even numbers.
    if (!(num & 1)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}*/

// quiz output question
/*#include<stdio.h>
void main()
{
  int a = 1,b = 0;
  if(b++)
    printf("If body started!\n");
  else 
    printf("We are here in else part.\n");
    
  a = (++a == 2)?2:1;   // a value is equal to result of the conditioin
  if(a)
    {
      if(a == 2)
        printf("Executing.\n");
      else
        printf("Stopped.\n");  
    }  
  else if(a++ == 3)
    {
      printf("we are here again!\n");
    } 
  else
      printf("Good Bye.\n"); 

}*/

// paper question finding average of three inputs to nearest integer. 
/*#include <stdio.h>
int main() {
    float num1, num2, num3, average;
    int rounded_average;

    printf("Enter three numbers :\n");

    scanf("%f %f %f", &num1, &num2, &num3);

   
    average = (num1 + num2 + num3) / 3.0; 

    
    rounded_average = (int)(average + 0.5); 

    
    printf("The rounded average is: %d\n", rounded_average);

    return 0;
}*/

// paper nuts,dryfruit question
/*#include <stdio.h>
int main() {
    int num_students;
    double calories_per_student, calories_per_pound_nuts;
    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    printf("Enter the number of calories required for each student: ");
    scanf("%lf", &calories_per_student);
    
    printf("Enter the number of calories in each pound of nuts: ");
    scanf("%lf", &calories_per_pound_nuts);
    
    double total_calories_needed = num_students * calories_per_student;
    double calories_per_pound_dried_fruit = calories_per_pound_nuts / 0.70;
    double calories_per_pound_mixture = (calories_per_pound_nuts + calories_per_pound_dried_fruit) / 2.0;
    double total_mixture_needed = total_calories_needed / calories_per_pound_mixture;
    double nuts_needed = total_mixture_needed / 2.0;
    double dried_fruit_needed = total_mixture_needed / 2.0;
    
    printf("\nAmount of nuts needed: %.2lf pounds\n", nuts_needed);
    printf("Amount of dried fruit needed: %.2lf pounds\n", dried_fruit_needed);
    
    return 0;
}*/

//  lab paper GCD important question
/*#include <stdio.h>
int main() {
    int num1, num2, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Euclidean algorithm to find GCD
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2; // Calculate remainder
        num1 = temp;        // Update num1 to the previous num2
    }

    printf("GCD of the given numbers is: %d\n", num1);

    return 0;
}*/

//lab paper dice question
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROLL_DICE (rand() % 6) + 1
int main() {
    srand(time(0));

    int player1_score = 0;
    int player2_score = 0;
    int roll;

    // Player 1's turn
    printf("Player 1's turn...\n");
    do {
        roll = ROLL_DICE;
        printf("Player 1 rolled a %d\n", roll);
        player1_score += roll;
    } while (roll == 6);

    // Player 2's turn
    printf("\nPlayer 2's turn...\n");
    do {
        roll = ROLL_DICE;
    printf("Player 2 rolled a %d\n", roll);
        player2_score += roll;
    } while (roll == 6);

    printf("\n--- Final Scores ---\n");
    printf("Player 1 total score: %d\n", player1_score);
    printf("Player 2 total score: %d\n", player2_score);

    if (player1_score > player2_score) {
        printf("Player 1 wins!\n");
    } else if (player2_score > player1_score) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a draw!\n");
    }

  return 0;
}*/

// lab paper palindrome question
/*#include <stdio.h>
int main() {
    int n, original, reversed, remainder, result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    do {
        original = n;
        reversed = 0;

        while (n != 0) {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }

        result = original + reversed;
        n = result;

        original = result;
        reversed = 0;
        while (original != 0) {
            remainder = original % 10;
            reversed = reversed * 10 + remainder;
            original /= 10;
        }

    } while (result != reversed);

    printf("The palindrome number is: %d\n", result);

    return 0;
}*/

//important
/*#include<stdio.h>
void main()
{
 for( ; ; );
 printf("Hello\n");
 return;
}*/

// finding the sum of digits in a number
/*#include<stdio.h>
void main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);

  int sum = 0;
  int temp=num;
  while(num != 0)
   {
     sum = sum + num%10;
    num/=10;
   }

   printf("The sum is %d.",sum);
}*/


// random
/*#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
 {
  srand(time(0));
  int num = rand();

  printf("Random number is %d.\n",num);

  int mum = rand() % 100;
  int guess;
  
  int isguess = 0;
  while(!isguess)
     {
      printf("Enter a guess number : ");
      scanf("%d", &guess);

      if(guess == mum)
      {
        printf("You have entered correct number : ");
        isguess=1;
      }
      if(guess < mum)
         printf("You have entered smaller.Try again.\n");
      if(guess > mum)
        printf("You have entered larger number.Try again.\n");   
     }
     return;
 }*/

// printing digital number
/*#include <stdio.h>
int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int digitalRoot;
    if (number == 0) {
        digitalRoot = 0;
    } else {
        digitalRoot = (number - 1) % 9 + 1;
    }

    printf("The digital root of %d is %d\n", number, digitalRoot);
    return 0;
}*/
/*#include<stdio.h>
void main()
{
  int num,remainder,sum;
  printf("Enter a number : ");
  scanf("%d",&num);

  while(num!=0)
    {
      sum=0;
      while(num!=0)
      {
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
      }

  if(sum>9)
     {
      num=sum;
      sum=0;
     }  
  }

  printf("So the digital root of the given number is %d.",sum);
  return;
}*/
//digital number function
/*#include<stdio.h>
int digital(int num)
{
  int sum=0,remainder=0;

  while(num!=0)
    {
      while(num!=0)
        {
          remainder=num%10;
          sum=sum+remainder;
          num/=10; 
        }

      if(sum>9)
        {
          num=sum;
          sum=0;
        }  

    }
    return sum;
}
void main()
{
  int num;printf("Enter a number : ");scanf("%d",&num);
  int answer=digital(num);
  printf("The digital number of %d is %d.",num,answer);
  return;
}*/

/*#include<stdio.h>
void main()
{

  // int a = printf("Hello world\n");:
  // printf("Hello world\n"); prints the string "Hello world" followed by a newline character to the console.
  // The printf() function returns the number of characters successfully written to the output. In this case, "Hello world\n" has 12 characters (H, e, l, l, o, space, w, o, r, l, d, newline).
  // Therefore, the integer variable a will be assigned the value 12.

  int a = printf("Hello world\n");
  printf("%d\n",a);int b;


  // int c = scanf("%d",&b);
  // scanf("%d",&b); reads an integer value from the standard input (keyboard) and stores it in the memory location pointed to by &b (the address of variable b).
  // The scanf() function returns the number of input items successfully matched and assigned. If the user enters a valid integer, scanf() will successfully match one item.
  // Therefore, the integer variable c will be assigned the value 1 if a valid integer is entered. If the input does not match the format specifier (e.g., entering text instead of a number), c would typically be 0 or EOF (End Of File).

  int c = scanf("%d",&b);
  printf("\n%d\n",c);


  int i,j;
  int k=scanf("%d %d",&i,&j);
  printf("%d",k);  

}*/

/*#include<stdio.h>
int a=10;
char c[] = "Hello world"; 
// int a = printf("Hello world");   // it will gave an error
char b=32;
void main()
{
printf("%d   %d",a,b);
printf("\n%s\n",c);
}*/

// hcf is the largest number which divides both the numbers
/*#include<stdio.h>
void main()
{
    int a,b;printf("Enter two number---> ");scanf("%d %d",&a,&b);
    
    int min=a;
    if(min>b)
    min=b;
    int hcf; 
    for(int i=1;i<min;i++)
      {
        if(a%i==0  && b%i==0)
          {
            hcf=i;
          }
      }
      printf("The hcf is %d.",hcf);
}*/

// lcm is the smallest number which is divisible by both the numbers
/*#include<stdio.h>
void main()
{
    int a,b;printf("Enter two number---> ");scanf("%d %d",&a,&b);

    int max=a;
    if(max<b)
      max=b;

    while(1)
     {
        if(max%a==0 && max%b==0)
          break;
          max++;
     }
    printf("The lcm of %d and %d is %d.",a,b,max);
}*/


// lab task 8 started here
//Q1
/*#include<stdio.h>
void main()
{
  int first=0,second=1,next=0;

  int j;printf("How many fabonacci you want----> ");scanf("%d",&j);

  if(j==1){
  printf("%d ",first);}
  else if(j==2){
  printf("%d %d ",first,second);}
  else
   {
    printf("%d %d ",first,second);
    for(int i=0;i<j-2;i++)
      {
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;
      }
   }
}*/
/*#include<stdio.h>
void main()
{
  long long int first=7778742049,second=12586269025;

  int num=0;
  long long int next=0;

  printf("Last 10 Fabonacci numbers\n");
  while(1)
    {
      if(num==10)
        {
          break;
        }

      next=second-first;

      if(next%2==0)
        {
          printf("%d  %lld\n",num+1,next);
          num++;
        }

      second=first;  
      first=next;
        
    }
}*/

//Q2
/*#include<stdio.h>
void main()
{
  long int num=0,reverse,temp=0,palindrome=0;
  for(int i=900;i<1000;i++)
    {
      for(int j=900;j<1000;j++)
         {
          reverse=0;
          num=i*j;
          temp=num;
          while(temp != 0)
            {
              reverse = (reverse*10) + temp%10;
              temp/=10;
            }

          if(num==reverse)
            {
              if(palindrome<num)
              palindrome=num;
            }
         }
    }
    printf("%lld\n",palindrome);

}*/

//Q3
/*#include<stdio.h>
void main()
{
  long int base,power;printf("First enter base and then power of a number--->\n");scanf("%ld %ld",&base,&power);

  long result=1;
  for(int i=0;i<power;i++)
    {
      result*=base;
    }

    printf("The answer is %ld",result);
}*/

// Q4
/*#include<stdio.h>
void main()
{
  int start,end;
  printf("Enter the first and last digit of the prime number you want to calculate\n");
  scanf("%d %d",&start,&end);

  int flag;
  for(int i=start;i<end;i++)
    {
      flag=0;
      for(int j=2;j<i/2;j++)
        {
          if(i%j==0)
            flag=1;
        }

      if(flag==0)
      {
       printf("%d  ",i);  
      }
    }
}*/

// Q5 pending

// Q6
/*#include<stdio.h>
void main()
{
  long int sum=0;

  for(int i=1;i<1000;i++)
    {
      if(i%3==0  ||  i%5==0)
        sum+=i;
    }

    printf("The sum is %ld",sum);
}*/

// lab task completed here


// lab task 9 start
// Q1
/*#include<stdio.h>
void main()
{
  for(int i=1;i<8;i++)
    {
      for(int j=i;j<8+i;j++)
        {
          if(j%2==0)
            printf("W ");
          else
            printf("B ");  
        }

        printf("\n");
    }
}*/

// Q2
/*#include<stdio.h>
void main()
{
  int laps;printf("Enter the number of laps--->");scanf("%d",&laps);

  int rounds[laps];
  for(int i=0;i<laps;i++)
    {
      scanf("%d",&rounds[i]);
    }

  int fastest=rounds[0],lowest=rounds[0],sum=0;
  
  for(int i=0;i<laps;i++)  
    {
      if(fastest>rounds[i])
        fastest=rounds[i];

      if(lowest<rounds[i])
        lowest=rounds[i];
        
      sum+=rounds[i];  
    }

    float average = (float)sum/laps;

    printf("F   %d\nL   %d\nA   %f",fastest,lowest,average);

}*/

// Q3
/*#include<stdio.h>
void main()
{
  int n,x;printf("Enter n value and x value for the function----> ");scanf("%d %d",&n,&x);

  long int result,factorial;
  double sum = 0;
  for(int k=0;k<=n;k++)
    {
      result=1,factorial=1;

      for(int i=0;i<k;i++)
       {
        result*=x;
       } 

      for(int i=1;i<k;i++)
        {
          factorial+=factorial*i;
        }

      sum+=(float)result/factorial;
    }
  printf("The formula output is %.2lf",sum);  
}*/

// Q4
/*#include<stdio.h>
void main()
{
  int sum,start,end;
  printf("Enter the first and last number(for triangle)---> ");
  scanf("%d %d",&start,&end);

  for(int i=start;i<=end;i++)
    {
      sum=0;
      for(int j=1;j<=i;j++)
        {
          sum+=j;
          printf("%d",j);

          if(j!=i)
           printf("+"); 
        }

      printf("=%d\n",sum);  
    }
}*/

// Q5
/*#include<stdio.h>
void main()
{
  int sum;
  for(int i=1;i<500;i++)
    {
      sum=0;
      for(int j=1;j<i;j++)
        {
          if(i%j==0)
            {
              sum+=j;
            }
        }

        if(sum==i)
          {
            printf("%d  ",i);
          }
    }
}*/

// Q6
/*#include<stdio.h>
void main()
{
  int flag;long int i=2520;
  
  while(1)
   {
    for(int j=1;j<=20;j++)
      {
        flag=0;
        if(i%j!=0)
        {
          flag=1;
          break;
        }  
      }
    
      if(flag == 0)
       {
        printf("The smallest number divisible by all numbers from 1 to 20 is %ld.",i);
        break;
       }
       i++;
   }
}*/

// lab task completed here


// lab task 10 started here
// Q1
/*#include<stdio.h>
void main()
{
  int n;printf("Enter the size of your array----> ");scanf("%d",&n);

  int arr[n];
  printf("Enter elements in your array---->");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

  // reading  
  printf("\nIn reversed order (Reading)\n---->");  
  for(int i=n-1;i>=0;i--)
    {
      printf("%d  ",arr[i]);
    }  
  printf("\n");  

  // second array
  int arr1[n];
  for(int i=0;i<n;i++)
    {
      arr1[i]=arr[i];
    }
  // writing
  for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
      arr[i]=arr1[j];
    }  

  printf("\nIn reversed order (Wrinting)\n---->");  
  for(int i=0;i<n;i++)
    {
      printf("%d  ",arr[i]);
    }  

    // this way can also be used when we have not to use second arr
    // printf("\nReversed(writing): ");
    // for (int i = 0; i < 5 / 2; i++)
    // {
    //     temp = arr[4 - i];
    //     arr[4 - i] = arr[i];
    //     arr[i] = temp;
    // }

}*/

// Q2
/*#include<stdio.h>
void main()
{
  int n;printf("Enter size of your array--->");scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

  int largest=arr[0];
  int second=largest;
  int third=second;
  
  for(int i=0;i<n;i++)
    {
      if(largest<arr[i])
        {
          third=second;
          second=largest;
          largest=arr[i];
        }
    }

  for(int i=0;i<n;i++)
    {
      if(arr[i]>third && arr[i]<second)
        third=arr[i];
    }

  printf("The largest is %d\nThe second largest is %d\nThe third largest is %d",largest,second,third);  
}*/

// Q3
/*#include<stdio.h>
void main()
{
  int first[5]={54, 2, 37, 7, 45};
  int second[5] = {51, 2, 45, 1, 6};

  int same1=0,sameindex1=0;

  for(int i=0;i<5;i++)
    {
      if(first[i]==second[i])
        sameindex1++;
      
      for(int j=0;j<5;j++)
        {
          if(first[i]==second[j])
            same1++;
        }
    }

  printf("The numers with same index and same value are %d\nThe numbers with same value are %d.",sameindex1,same1);  
    
}*/

// Q4
/*#include<stdio.h>
void main()
{
  int arr[8]={45,67,123,768,23,68,13,57};

  int temp=0;
  for(int i=0;i<8/2;i++)
    {
      temp=arr[i];
      arr[i]=arr[8-1-i];
      arr[8-1-i]=temp;
    }

  for(int i=0;i<8;i++)
    printf("%d ",arr[i]);  
}*/
// lab task completed here

// lab task 11 started here
// Q1
//  fgets(str,sizeof(str),stdin); // if fgets is used it is good to use the below line as well b/c fgets includes \n at the end when we press enter 
//  str[strcspn(str, "\n")] = '\0';
/*#include<stdio.h>
#include<string.h>
int main()
{
  char ch[1000];
  printf("Enter a sentence--->");
  fgets(ch,sizeof(ch),stdin);
  ch[strcspn(ch,"\n")]='\0';

  int len=strlen(ch);

  if(len==0 || ch[0]=='\n' ||ch[0]=='\0' || ch[0]==' ')
    {
      printf("\nZero(0) words entered by the user\n");
      return 0;
    }

  int count=1;
  for(int i=0;i<len;i++)
    {
      if(ch[i]==' ')
      count++;
    }

  printf("There are %d words in the sentence.\n",count);  

  return 0;
}*/

// Q2
/*#include<stdio.h>
#include<string.h>
int main()
{
  char ch[1000];
  printf("Enter a looooong word---> ");
  fgets(ch,sizeof(ch),stdin);
  ch[strcspn(ch,"\n")]='\0';

  int len=strlen(ch);

  int count=1;
  for(int i=0;i<len;i++)
    {
      if(ch[i]==ch[i+1])
       count++;

      if(ch[i]!=ch[i+1])
       {
        printf("%c%d",ch[i],count);
        count=1;
       } 
    }
  
  return 0;
}*/

// Q3
/*#include<stdio.h>
#include<string.h>
int main()
{
  char ch[1000];
  printf("Enter a looooong word---> ");
  fgets(ch,sizeof(ch),stdin);
  ch[strcspn(ch,"\n")]='\0';

  int len=strlen(ch);

  int flag;
  for(int i=0;i<len;i++)
    {
      flag=0;
      for(int j=i+1;j<len;j++)
        {
              if(ch[i]==ch[j])
               flag=1;
        }

      for(int j=i;j>=0;j--)
        {
          if(i!=j)
            if(ch[i]==ch[j])
             flag=1;
        }  

      if(flag==0)
        printf("%c",ch[i]);  
    }
  
  return 0;
}*/

// Q4
/*#include<stdio.h>
#include<string.h>
int main()
{
  char ch[1000];
  printf("Enter a looooong word---> ");
  fgets(ch,sizeof(ch),stdin);
  ch[strcspn(ch,"\n")]='\0';

  int len=strlen(ch);

  int index=0,count=0,frequency;
  for(int i=0;i<len;i++)
    {
      frequency=1;
      for(int j=0;j<len;j++)
        {
          if(i!=j)
           {
            if(ch[i]==ch[j])
             frequency++;
           }
        }

      if(frequency>count)
        {
          count=frequency;
          index=i;
        }  
    }

    printf("The character %c occurs with %d frequency.",ch[index],count);
  
  return 0;
}*/

// Q5
/*#include<stdio.h>
#include<string.h>
int main()
{
  char ch[1000];
  printf("Enter a word----> ");
  fgets(ch,sizeof(ch),stdin);
  ch[strcspn(ch,"\n")]='\0';

  int len=strlen(ch);

  int flag;
  for(int i=0;i<len;i++)
    { 
      flag=0;
      for(int j=0;j<i;j++)
        {
          if(ch[i]==ch[j])
           flag=1;
        }
      if(flag==0)
       printf("%c",ch[i]);  
    }

  return 0;
}*/

// Q6
/*#include <stdio.h>
#include <string.h> // Required for strlen and strcpy
int main() {
    char sentence[1000];
    char longestWord[100];
    char currentWord[100];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character if present
    sentence[strcspn(sentence, "\n")] = 0;

    while (sentence[i] != '\0') {
        // If current character is not a space, it's part of a word
        if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n') {
            currentWord[j++] = sentence[i];
        } else {
            // End of a word or multiple spaces
            if (j > 0) { // If a word was actually formed
                currentWord[j] = '\0'; // Null-terminate the current word
                if (strlen(currentWord) > maxLength) {
                    maxLength = strlen(currentWord);
                    strcpy(longestWord, currentWord);
                }
                j = 0; // Reset for the next word
            }
        }
        i++;
    }

    // Handle the last word in case it's not followed by a space
    if (j > 0) {
        currentWord[j] = '\0';
        if (strlen(currentWord) > maxLength) {
            maxLength = strlen(currentWord);
            strcpy(longestWord, currentWord);
        }
    }

    printf("Longest word: %s\n", longestWord);

    return 0;
}*/

// Q7
/*#include<stdio.h>
#include<string.h>
int main()
{
  char sen[1000];
  printf("Enter a sentence ----> ");
  fgets(sen,sizeof(sen),stdin);
  sen[strcspn(sen,"\n")]='\0';

  int len=strlen(sen);

  int index=0,count,frequency=0;

  for(int i=0;i<len;i++)
    {
      if(sen[i]!=' ')
       count++;

      if(sen[i]==' ')
       {
        if(frequency<count)
          {
            frequency=count;
            index=i;
          }
        count=0;  
       }
    }

  printf("\nLongest word!----> ");  
  for(int i=index-frequency;i<index;i++)
    {
      printf("%c",sen[i]);
    }  

  return 0;
}*/

// Q8
/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sen[1000];
    printf("Enter your sentence----> ");
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';
    int len = strlen(sen);

    char word[100];
    printf("Enter the word you wanna change----> ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
    int len1 = strlen(word);

    char replace[100];
    printf("Enter the word you wanna replace----> ");
    fgets(replace, sizeof(replace), stdin);
    replace[strcspn(replace, "\n")] = '\0';

    // FIXED LOGIC: We scan sentence word-by-word
    for (int i = 0; i < len; )
    {
        if ((i == 0 || sen[i-1] == ' ') && 
            strncmp(&sen[i], word, len1) == 0 &&   
            (sen[i+len1] == ' ' || sen[i+len1] == '\0' || ispunct(sen[i+len1]))) 
        {
            printf("%s", replace);
            i += len1;  
        }
        else
        {
            printf("%c", sen[i]);
            i++;
        }
    }

    return 0;
}*/

// lab task 11 completed


// lab task 12 started here
// Q1
/*#include<stdio.h>
void main()
{
  int r,c;printf("Enter number of rows and columns of your matrix---> ");scanf("%d %d",&r,&c);

  int matrix[r][c];
  printf("Enter elements in matrix!\n");
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      scanf("%d",&matrix[i][j]);

  for(int i=0;i<c;i++)
  {
    for(int j=0;j<r;j++)
    {
      printf("%d  ",matrix[j][i]);  
    }
      printf("\n");  
  }
}*/

// Q2
/*#include<stdio.h>
void main()
{
  int r,c;printf("Enter number of rows and columns of your matrix---> ");scanf("%d %d",&r,&c);

  int matrix[r][c];
  printf("Enter elements in matrix!\n");
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      scanf("%d",&matrix[i][j]);

    
  int sumup=0,sumdown=0;
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
        {
          if(j>i)
           sumup+=matrix[i][j];

          if(i>j)
           sumdown+=matrix[i][j]; 
        }
    }    

  printf("The upper triangular sum is %d\nThe lower triangular sum is %d",sumup,sumdown);  
  
}*/

// Q3
/*#include<stdio.h>
void main()
{
  int r,c;printf("Enter number of rows and columns of your matrix---> ");scanf("%d %d",&r,&c);

  int matrix[r][c];
  printf("Enter elements in matrix!\n");
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      scanf("%d",&matrix[i][j]);

  int bordersum=0;
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
        {
          if((i==0 || j==0)  && i!=r-1 && j!=c-1)
            bordersum+=matrix[i][j];

          if(i==r-1 || j==c-1)
            bordersum+=matrix[i][j];  
        }
    }  

  printf("The sum of border elements is %d.",bordersum);  
  
}*/

// Q4
// wrong code
/*#include<stdio.h>
void main()
{
  int r,c;printf("Enter number of rows and column of your matrix---> ");scanf("%d %d",&r,&c);

  int matrix[r][c];
  for(int i=0;i<r;i++)
    {
      printf("Enter element in your %d row---> ",i+1);
      for(int j=0;j<c;j++)
        scanf("%d",&matrix[i][j]);
    }

  int count=0;
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
        {
          if(i+j==count)
           {
            printf("%d ",matrix[i][j]);
            count++;
           }
        }
        
      for(int j=0;j<c;j++)
        {

        }  
    }
}*/
// correct code // barar
/*#include <stdio.h>

void main()
{
    int rows, columns, upper, lower, left, right, r;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        printf("Enter %d integers for row#%d: ", columns, i+1);
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    upper = 0;
    right = columns;
    left = 0;
    lower = rows;
    r = rows;

    while (r != 0)
    {
        if (r == 1 && rows % 2 != 0)
        {
            for (int i = left; i < right; i++)
            {
                printf("%d ", matrix[(rows / 2)][i]);
            }
            lower--;
            r --;
        }
        else
        {
            for (int i = left; i < right; i++)
            {
                printf("%d ", matrix[upper][i]);
            }

            upper++;

            for (int i = upper; i < lower; i++)
            {
                printf("%d ", matrix[i][right - 1]);
            }

            right--;

            for (int i = right - 1; i > left; i--)
            {
                printf("%d ", matrix[lower - 1][i]);
            }

            lower--;

            for (int i = lower; i >= upper; i--)
            {
                printf("%d ", matrix[i][left]);
            }

            left++;

            r -= 2;
        }
    }
}*/
// correct code // munim
/*#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter Coloumns and Rows: ");
    scanf("%d%d",&m,&n);
    int array[m][n];
    int row=0;
    int mrow=m-1;
    int coloumn=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    while(count<tne){
        for(int j=coloumn;j<=maxc&&count<tne;j++){
            printf("%d ",array[row][j]);
            count++;
        }
    row++;
        for(int i=row;i<=mrow&&count<tne;i++){
            printf("%d ",array[i][maxc]);
            count++;
        }
    maxc--;
        for(int j=maxc;j>=coloumn&&count<tne;j--){
            printf("%d ",array[mrow][j]);
            count++;
        }
    mrow--;
        for(int i=mrow;i>=row&&count<tne;i--){
            printf("%d ",array[i][coloumn]);
            count++;
        }
        coloumn++;
    }
    return 0;
}*/

// Q5
/*#include<stdio.h>
void main()
{
  int r,c;printf("Enter number of rows and columns of your matrix---> ");scanf("%d %d",&r,&c);

  int matrix[r][c];
  printf("Enter elements in matrix!\n");
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      scanf("%d",&matrix[i][j]);

int primaryD=0,secondryD=0;      
for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
      {
        if(i==j)
          primaryD+=matrix[i][j];

        if(j==c-1-i)
          secondryD+=matrix[i][j];  
      }
  }  

  int diff=primaryD-secondryD;
  if(diff<0)
   diff=diff*-1;

  printf("The primary diagonal sum is %d\nThe secondry diagonal sum is %d\n",primaryD,secondryD);
  printf("The diagonals difference is |%d - %d| : %d\n",primaryD,secondryD,diff); 
  
}*/

// Q6
// 180 degree rotation
/*#include<stdio.h>
void main()
{
  int r,c;printf("Enter size of rows and column of your matrix----> ");scanf("%d %d",&r,&c);

  int matrix[r][c];
  printf("Enter elements of your matrix\n");
  for(int i=0;i<r;i++)
    {
      printf("Enter elements of row # %d ---> ",i+1);
      for(int j=0;j<c;j++)
        scanf("%d",&matrix[i][j]);
    }

  for(int i=r-1;i>=0;i--)
    {
      for(int j=c-1;j>=0;j--)
        {
          printf("%d ",matrix[i][j]);
        }
      printf("\n");  
    }  
}*/
// 90 degree rotation
/*#include<stdio.h>
void main()
{
  int r,c;printf("Enter number of rows and columns of your matrix---> ");scanf("%d %d",&r,&c);

  int matrix[r][c];
  printf("Enter elements in matrix!\n");
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      scanf("%d",&matrix[i][j]);


  printf("\n");
  for(int i=0;i<c;i++)
    {
      for(int j=r-1;j>=0;j--)
        {
          printf("%d ",matrix[j][i]);
        }

      printf("\n");  
    }    
  
}*/
// lab task completed here


// Lab task 13 started here
/*#include<stdio.h>
float get_grade_point(char grade)
{
  float num;
  if(grade=='A' || grade=='a')
    num=4.0;
  if(grade=='B' || grade=='b')
    num=3.0;
  if(grade=='C' || grade=='c')
    num=2.0;
  if(grade=='D' || grade=='d') 
    num=1.0;
  if(grade=='F' || grade=='f')
    num=0.0;
    
  return num;  
}
float get_sum(int values[],int size)
{
  float sum=0;
  for(int i=0;i<size;i++)
    {
      sum+=(float)values[i];
    }
  return sum;  
}
float calculate_gpa(char grades[],int credit_hours[],int size)
{

  float sumdown=get_sum(credit_hours,size);

  float upsum=0;
  for(int i=0;i<size;i++)
    {
      upsum+=get_grade_point(grades[i])*credit_hours[i];
    }  

  return upsum/sumdown;  
}
int main()
{
  int num;printf("Enter number of your papers ----> ");scanf("%d",&num);

  printf("Enter your grades and credit hours!\n");

  char grade[num];
  int credit_hours[num];

  for(int i=0;i<num;i++)
    {
      printf("Enter your %d paper grades : ",i+1);scanf(" %c",&grade[i]);
      printf("Enter credit hours for %d paper : ",i+1);scanf("%d",&credit_hours[i]);
    }

  float gpa=calculate_gpa(grade,credit_hours,num);  

  printf("Your GPA is %.3f.\n",gpa);
  return 0;
}*/
// lab task completed here


// lab task 14 statted here
// Q1
/*#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int is_strong(char *str)
{
  int digit=0,lower=0,upper=0,special=0,count=0;

  while(*str != '\0')
   {
    if(*str>='0' && *str<='9')
     digit=1;
    if(*str>='a' && *str<='z')
     lower=1;
    if(*str>='A' && *str<='Z')
     upper=1;
    if(*str=='@' || *str=='#' || *str=='$' || *str=='&')
     special=1;
     
    count++;
     str++; 
   }

  if(count>=8 && upper==1 && lower==1 && special==1 && digit==1)
    return true;
  else
    return false;   
}

int main()
{
  printf("Enter your password ---> ");
  char password[1000];
  fgets(password,sizeof(password),stdin);
  password[strcspn(password,"\n")]='\0';

  char *go=password;
  int a=is_strong(go);

  if(a==1)
   printf("Strong password Bro!\n");
  if(a==0)
   printf("Weak password, tum sa na ho paiga!\n");

  return 0; 
}*/

// Q2
/*#include<stdio.h>
int maxi(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
      {
        if(max<arr[i])
          max=arr[i];
      }

      return max;
}
int mini(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
      {
        if(min>arr[i])
          min=arr[i];
      }

      return min;
}
float average(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
      {
        sum+=arr[i];
      }
    float aver=(float)sum/n;
    
    return aver;
}
int threshold(int arr[],int n,int require)
{
    int frequency=0;
    for(int i=0;i<n;i++)
      {
        if(arr[i]>require)
          frequency++;
      }

    return frequency;  
}
void main()
{
    int num;
    printf("Enter how many papers you have : ");
    scanf("%d",&num);

    int marks[num];
    printf("Enter numbers of your papers---->\n");
    for(int i=0;i<num;i++)
      {
        printf("Enter Paper %d marks : ",i+1);
        scanf("%d",&marks[i]);
      }

    printf("\nEnter the number above which you find numbers : ");
    int require;
    scanf("%d",&require);  
    int a=maxi(marks,num);
    int b=mini(marks,num);
    float c=average(marks,num);
    int d=threshold(marks,num,require);  

    printf("The maximum number is %d\nThe manimum number %d\nThe average is %.2f\nThe numbers higher than %d is/are %d",a,b,c,require,d);
}*/

// Q3
/*#include <stdio.h> 
void deposit(double *balance_ptr, double amount) {
    if (amount > 0) {
        *balance_ptr += amount;
    } else {
        printf("Invalid deposit, amount must be positive.\n");
    }
}
void withdraw(double *balance_ptr, double amount) {
    if (amount > 0 && amount <= *balance_ptr) {
        *balance_ptr -= amount;
    } else if (amount <= 0) {
        printf("Invalid withdrawal, amount must be positive.\n");
    } else {
        printf("Insufficient funds for withdrawal.\n");
    }
}

int main() 
{
    double balance = 1000.0; 

    printf("Initial balance: $%.2f\n", balance);

    deposit(&balance, 200.0);
    printf("Balance after deposit of $200.00: $%.2f\n", balance);
    // double*p=&balance;
    // deposit(p,200.0);
    // printf("Balance after deposit of $200.00: $%.2f\n", balance);
    

    withdraw(&balance, 50.0);
    printf("Balance after withdrawal of $50.00: $%.2f\n", balance);

    withdraw(&balance, 1500.0);
    printf("Balance after attempted $1500.00 withdrawal: $%.2f\n", balance);

    deposit(&balance, -50.0);

    return 0;
}*/
// lab task completed here





