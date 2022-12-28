#include<stdio.h>
int main()
{
	int a,b,e1,e2;
	scanf("%d%d",&a,&b);
	float c,d,f1,f2;
	scanf("%f%f",&c,&d);
    e1=a+b;
    e2=a-b;
    f1=c+d;
    f2=c-d;
    printf("%d %d 
 %0.1f %0.1f",e1,e2,f1,f2);
}