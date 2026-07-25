// printing strings
/*#include <stdio.h>
#include <string.h>
void main()
{
    char str1[] = "Hello world";
    char str2[] = {'H','e','l','l','o',' ','w','o','r','l','d','\0'}; // if '\0' is not used, then the Hello world is printed two times

    printf("\n%s\n",str1);
    printf("\n%s\n",str2);
}*/

//reading by scanf function
/*#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    printf("Enter your name Sir : ");
    scanf("%s",&name);// scanf stops reading of a string when a space/tab/newline is encountered
    printf("%s",name);

    char str[]="hello world";
    printf("\n%c",str[7]);
}*/

// reading by fgets function
/*#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    printf("fgets function is used for name input from user : ");
    fgets(name,sizeof(name),stdin);  // Syntax(name of the string,size and then stdin)
    // gets(name);
    puts(name);

    printf("%s",name);
}*/

//string cancatenation----strcat
/*#include <stdio.h>
#include <string.h>
void main()
{
    char name[] = "Muhammad ";
    char nome[] = "Atif";

    strcat(name,nome);
    printf("\nThe cancatenated string is now stored in first string(name) as : %s\n",name);

    printf("\nAlso\n");
    puts(strcat(name,nome));

}*/

// string length function----strlen
/*#include <stdio.h>
#include <string.h>
void main()
{
    char forlen[] = {'P','e','s','h','a','w','a','r',' ','M','o','d','e','l'};
    printf("\nThe length of the string is %d\n",strlen(forlen));

    char len[]="hello world";
    size_t length = strlen(len);// using size_t a good programming practice instead of int for storing lengths,sizes
    printf("\n%zu\n",length);
}*/

//string copy function----strcpy
/*#include <stdio.h>
#include <string.h>
void main()
{
    char first[100] = "Ahmad";
    char second[80];

    strcpy(second,first);
    printf("\nThe copied name in string 'second' is %s\n",second);
}*/

//string compare function----strcmp
/*#include <stdio.h>
#include <string.h>
void main()
{
    char compare1[] = "Ahmad";
    char compare2[] = "Rashid";
    printf("\nThe result generated from the comparison is %d\n",strcmp(compare1,compare2));

    char str1[] = "Barar";
    char str2[] = "Ali";
    printf("\nThe result generated from the comparison is %d\n",strcmp(str1,str2));

    char n1[] = "hasan";
    char n2[] = "hasan";
    printf("\nThe result generated from the comparison is %d\n",strcmp(n1,n2));

 // the strcmp function compares the ascii value of strings' frist character   

}*/

//string reverse function ----->strrev
/*#include<stdio.h>
#include<string.h>
void main()
{
    char s1[] = "university";
    char s2[] = "School";
    char s3[150];

    printf("\nThe reversed string of s1 is : ");
    puts(strrev(s1));
    printf("\nThe reversed string of s2 is : ");
    puts(strrev(s2));

    strcpy(s3,strcat(s1,s2));
    puts(s3);
}*/


/*Topic Functions :
Try making your own header file in this one if u want ... make a c file but name it .h instead of .c and paste it in code folder where you want to use it . Then include it in your code by "#include"example.h" . Then you can call the functions that you have defined inside it in that code . Try defining the following functions :

Code 1 :
Make a C function that takes an int in parameter and returns 1 if it is prime and 0 if it is not prime .

Code 2 :
Write a C function that takes an array and its size and prints it when the function is called, 
(make this one for int,float and also char arrays separately) .

Code 3 :
Write a C function that takes an int parameter and returns its factorial .

Code 4 :
Write a C function that takes a char parameter and changes its case . example a to A , B to b .

Topic : Array Handling
Code 5 :
Problem Statement :
Take n number of integers in an array from user and take another int value from user called target ... now write a code to check if any three of numbers in that array add up to the target ... Print yes if 3 numbers do add up to target and no if they dont ... for example :

INPUT :
5
1 2 3 4 5
10

OUTPUT :
Yes

Explanation :
1+4+5=10
2+3+5=10
Print yes if even one true case is detected .

INPUT :
5
1 2 3 4 5
20

OUPUT :
No

Explanation :
No combo of any 3 of these adds upto 20 so No is printed .

Note :
This problem has been taken from FPSC (FAST PROBLEM SOLVING COMPETITION) that took place on 15th Nov, 2025*/



// simple code
/*#include<stdio.h>
#include<string.h>
void main()
{
  char str[]="Muhammad Atif Khan Jan Janan Gul Jan Khan";   // str[45],str[41],str[42]

  int a=strlen(str);
  printf("%d    %d",sizeof(str),a);
}*/



