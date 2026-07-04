// question 6
/*#include<stdio.h>
#include<string.h>
int main()
{
  char str[1000];printf("Enter a string : ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';

  int left=0;
  int right=strlen(str)-1;

  while(left<right)
   {
    if(str[left]!=str[right])
    {
      printf("%s is  not a palindrome string.",str);
      return 0;
    }  
    left++,right--;
   }

   printf("%s is a palindrome string.",str);

   return 0;
}*/
