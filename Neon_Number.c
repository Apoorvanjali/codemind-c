#include<stdio.h>
int main()
{
    int n,r,sq,sum=0;
    scanf("%d",&n);
    sq=n*n; //n=9 81
    while(sq>0) //81>0
    {
        r=sq%10;// r=81%10=1  r=8
        sq=sq/10;//81/10=8  sq=0
        sum=sum+r;//sum=0+1=1  sum=1+8=9
    }
    if(sum==n) //sum=9 n=9
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}