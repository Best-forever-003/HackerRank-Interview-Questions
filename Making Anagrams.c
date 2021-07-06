#include<stdio.h>
#include<string.h> //various functions for manipulating arrays of characters.
#include<math.h> // declares a set of functions to perform mathematical operations
void freq(char s[],int a[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    a[s[i]-'a']++;
}
int main()
{
    char s1[10000], s2[10000];
    int a1[26]={0},a2[26]={0},ans=0,i,j;
    scanf("%s",s1);
    scanf("%s",s2);
    freq(s1,a1);
    freq(s2,a2);
    for(i=0;i<26;i++)
    ans=ans+abs(a1[i]-a2[i]);
    printf("%d",ans);
    return 0;
}