#include<stdio.h>
int main()
{
    int a=-1,b=1,n,sum=0;
    printf("Enter the number by which you want fibonacci series ");
    scanf("%d",&n);
    while(n)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
        n--;
    }
}