#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,r,i,d,t;
    scanf("%d",&n);
    t=n;
    d=log10(n)+1;
    for(i=d;i>0;i--)
    {
        r=n%10;
        s=s+pow(r,i);
        n=n/10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}