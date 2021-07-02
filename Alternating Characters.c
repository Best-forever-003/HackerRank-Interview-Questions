#include<stdio.h>
#include<string.h>
int main()
{
    int n,q,i,j,ans=0;
    scanf("%d",&q);
    char s[100000];
    for(j=0;j<q;j++)
    {
        ans=0;
        scanf("%s",s);
        n=strlen(s);
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}