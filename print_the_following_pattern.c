#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||((n-i)+1)==j)
                printf("x");
            else 
                printf("0");
        }
        printf("
");
    }
    return 0;
}