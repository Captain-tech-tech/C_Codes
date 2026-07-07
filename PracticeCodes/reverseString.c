// 8 Create a program that uses pointers to reverse a string.
/*#include<stdio.h>
#include<string.h>
void stringrev(char *str)
{
    int count=0;
    char *ptr=str;

    while(*ptr!='\0')
      {
        count++;
        ptr++;
      }

    ptr--;  
    char temp=0;  
    for(int i=0;i<count/2;i++)
      {
        temp=*str;
        *str=*ptr;
        *ptr=temp;
        str++;
        ptr--;
      }  
}
int main()
{
    char str[1000];
    printf("Enter a string ----> ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    printf("Your entered string is %s.\n",str);

    stringrev(str);

    printf("Your reverse string is %s.\n",str);

}*/
