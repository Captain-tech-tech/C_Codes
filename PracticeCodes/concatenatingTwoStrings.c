// 17 Write a program that concatenates two strings using pointers
/*#include<stdio.h>
#include<string.h>
void can(char *ptr1,char *ptr2,int len)
{
    while(*ptr1!=0)
     {
        ptr1++;
     }

    for(int i=0;i<len;i++)
     {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
     }
}
int main()
{
    char str1[100];
    printf("Enter first string----> ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';

    char str2[100];
    printf("Enter your second string----> ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    int len=strlen(str2);

    char *ptr1=str1,*ptr2=str2;
    can(ptr1,ptr2,len);

    printf("Your concatenated string is %s.\n",str1);

}*/
