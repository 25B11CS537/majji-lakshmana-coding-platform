#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y;
    double hypotenuse;
    scanf("%d %d",&X,&Y);
    hypotenuse = sqrt(( X * X) + ( Y * Y));
    printf("%.2f
",hypotenuse);
    return 0 ;
}