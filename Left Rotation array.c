#include<stdio.h>
int main()
{
    int i,n,d;
    scanf("%d%d",&n,&d);
    int a[n],s[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    s[i]=a[(i+d)%n];
    for(i=0;i<n;i++)
    printf("%d ",s[i]);
    return 0;
}