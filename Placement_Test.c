#include<stdio.h>
int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        int c;
        c=(x/10)*y;
        printf("%d
",c);
    }
}