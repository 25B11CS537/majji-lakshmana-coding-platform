#include<stdio.h>
int main()
{
    int  T,S,B;
    long long capacity_bytes, capacity_kb;
    scanf("%d %d %d ",&T,&S,&B);
capacity_bytes = 2LL * T * S * B * 512 ;
capacity_kb = capacity_bytes / 1024 ;
printf("%lld KB
",capacity_kb);
return 0;
}