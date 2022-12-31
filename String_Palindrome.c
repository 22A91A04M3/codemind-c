#include<stdio.h>
#include<string.h>
int main()
{
    char string[20];
    scanf("%[^
]c",&string);
    int length,flag=0;
    length=strlen(string);
    for(int i=0;i<length;i++)
    {
        if(string[i]!=string[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}