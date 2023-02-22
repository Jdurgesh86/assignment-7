#include<stdio.h>
void hcf(int ,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    hcf(a,b);
}

void hcf(int a,int b)
{
    int i;
    int max=a>b?a:b;
    for(i=2;i<max;i++)
        if(a%i==0&&b%i==0)
        {
            printf("%d and %d is not a coprime",a,b);
            break;
        }
    if(i==max)
        printf("%d and %d have a coprime factors",a,b);
}