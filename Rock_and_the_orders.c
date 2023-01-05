#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,t1=0,t2=0;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    t1=a1+a2+a3;
    t2=b1+b2+b3;
    if(t1>=150&&t2>=150)
    {
        if((t1+t2+d+d)>(t1+t2+c))
        printf("YES");
    else
        printf("NO");
    }
    else if((t1>=150&&t2<150)||(t1<150&&t2>=150))
        {
            if((t1+t2+d+c)<(t1+t2+d+d))
            printf("YES");
            else
            printf("NO");
        }
        else
        printf("NO");
        return 0;
}