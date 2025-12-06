#include<stdio.h>
int main()
{
    int inches;
    scanf("%d",&inches);
    double centimeters = inches * 2.54;
    printf("%.2f
",centimeters);
    return 0;
}