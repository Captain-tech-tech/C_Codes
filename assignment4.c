/*#include <stdio.h>
int main()
{
    int a = 8;
    int b = 6;
    printf("The result of (a-b)^3 is :%d",a*a*a-b*b*b-3*a*b*(a-b));
}*/


/*#include<stdio.h>
void main()
{
    int time;printf("Enter your time in seconds : ");scanf("%d",&time);

    printf("%d hours,%d minutes,%d seconds.",time/3600,(time%3600)/60,time%60);
}*/


/*#include <stdio.h>
void main()
{
    int a=7,b=4,c=3,equilateral;

    printf("a=%d\tb=%d\tc=%d",a,b,c);

    equilateral=(a!=b && b!=c)?printf("\nthe triangle is equilateral\n"):printf("\nThe triangle is not scalene");


    // we can do this
    // (x>y)?printf("okay"):(c<y)?printf("No"):printf("Hiii");

}*/


/*#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three values ----> ");scanf("%d %d %d",&a,&b,&c);

    (a==b && b==c)?printf("Equilateral triangle"):((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))?printf("Issoceles triangle"):printf("Scalene triangle");
}*/
