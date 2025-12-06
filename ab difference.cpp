#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,B;
int sum,product,difference;
scanf("%d %d",&A,&B);
sum = A+B;
product =A*B;
difference=abs(sum-product);
printf("%d",difference);
return 0;
}