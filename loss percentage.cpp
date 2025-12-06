#include<stdio.h>
int main()
{
    int X,Y;
    
    scanf("%d %d",&X,&Y);
    float loss =(X -Y);
    float loss_percentage = ( loss / X)*100;
    printf("%.2f
",loss_percentage);
    return 0;
}