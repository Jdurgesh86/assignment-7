#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("write the two number from which you want to print the prime nubmers \n");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        for(j=2;j<=i;j++)
            {
                if(i%j==0)
                    break;
            }
            if(i==j)
                printf("%d ",j);
    }
}