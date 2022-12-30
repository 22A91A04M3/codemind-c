#include<stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c>=a&&c<b)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}