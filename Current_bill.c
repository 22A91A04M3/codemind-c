#include<stdio.h>
int main()
{
    int un,uc=0;
    scanf("%d",&un);
    float bi,sr,tb;
    if(un<200)
    {
        bi=un*1.20;
    }
    else if(un>=200 && un<400)
    {
        bi=un*1.50;
    }
    else if(un>=400 && un<600)
    {
        bi=un*1.80;
    }
    else
    {
        bi=un*2.00;
    }
    if(un>=400)
    {
        sr=bi*0.15;
        tb=bi+sr;
        printf("%0.2f",tb);
    }
    else
    {
        tb=bi+100;
        printf("%0.2f",tb);
    }
}