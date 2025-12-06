#include<stdio.h>
int main()
{
    int kmph;
    scanf("%d",&kmph);
    double mps = kmph * ( 5.0 / 18.0);
    printf("%.2f
",mps);
    return 0;
}