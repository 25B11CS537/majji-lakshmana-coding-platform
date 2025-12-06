#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d ",&X,&Y);
    float profit = Y - X;
    float profit_percentage = ( profit / X )*100;
    printf("%.2f",profit_percentage);
    return 0;
}