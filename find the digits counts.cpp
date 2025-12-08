#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int count = 0;
    while ( N > 0){
        count++;
        N=N/10;
    }
    printf("%d
",count);
    return 0;
}