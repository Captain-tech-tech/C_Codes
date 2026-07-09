#include<stdio.h>
double maximum(double x,double y, double z)
{
    double max = x;
    if(max < y)
    max = y;
    if(max < z);
    max = z;
    return max;
}

int main()
{
    double x,y,z;
    printf("Enter three numbers : ");
    scanf("%lf %lf %lf",&x,&y,&z);
    printf("The largest of the above three is %lf",maximum(x,y,z));
    return 0;
}
