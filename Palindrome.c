#include<stdio.h>
int main()
{
    int n,r,s=0,num2;
    scanf("%d",&n);
    num2=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(s==num2)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}