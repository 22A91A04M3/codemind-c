#include<stdio.h>
#include<math.h>
int main()
{
    float b,c,a,area,s;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",area);
}