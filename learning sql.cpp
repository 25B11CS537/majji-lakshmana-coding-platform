#include<stdio.h>
int main()
{
    int R,C,E;
    scanf("%d %d %d",&R,&C,&E);
    int total_rows= R +E;
    int total_columns= total_rows*C;
    printf("%d",total_columns);
    return 0;
}
