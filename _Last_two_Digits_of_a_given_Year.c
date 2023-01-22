#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    b=a%100;
    printf("%02d",b);
}