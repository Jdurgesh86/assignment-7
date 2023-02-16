#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,count=0,power,temp,rem;
    printf("Enter the number ");
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        temp/=10;
        count++;
    }

    power=count;
    temp=n;
    while(temp)
    {
        rem=temp%10;
        sum=sum+pow(rem,power);
        printf("%d",sum);
        temp/=10;
    }
    if(sum==n)
    {
        printf("The %d is an armstrong number ",n);
    }
    else
    printf("not an armstrong number");
}