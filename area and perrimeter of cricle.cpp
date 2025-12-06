#include<stdio.h>
int main()
{
    int r;
    float area,perimeter,pi = 3.14;
    scanf("%d",&r);
    area = pi * r *r;
    perimeter = 2*pi*r;
    printf("%.2f
%.2f",area,perimeter);
    return 0;
}