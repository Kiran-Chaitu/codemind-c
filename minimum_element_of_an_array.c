#include<stdio.h>
int main()
{
    int n,i,l=100000;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<l)
            l=a[i];
    }
    printf("%d",l);
    return 0;
}