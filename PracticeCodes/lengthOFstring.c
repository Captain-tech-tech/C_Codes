// 2 Create a program that uses pointers to find the length of a string.
/*#include<stdio.h>
#include<string.h>
int len(char *ptr)
{
    int count=0;
    while(*ptr!='\0')
     {
        count++;
        ptr++;
     }

    return count; 
}
int main()
{
    char str[1000];
    printf("Enter a string ----> ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    char *ptr=str; 
    int a = len(ptr);

    printf("The len of the string is %d.\n",a);
}*/
