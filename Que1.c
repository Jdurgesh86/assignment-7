#include<stdio.h>
int main()
{
    int num,a=-1,b=1,sum=0;
    printf("Enter the term you want to find ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %dth fibonacci number is %d",num,sum);
}