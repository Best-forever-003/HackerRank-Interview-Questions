#include<stdio.h>
#include<stdlib.h> //header information for 'Memory Allocation/Freeing' functions.
int main()
{
    long long n,m,i,max=0,x=0;
    //long long int is a signed integral type is at least 64 bits
    scanf("%lld%lld",&n,&m);
    int *arr = (int* )malloc(sizeof(int)*n+1); 
    //malloc(sizeof(int)) means you are allocating space off the heap to store an int .
    for(i=0;i<m;i++)
    {
        long long a,b,k;
        scanf("%lld%lld%lld",&a,&b,&k);
        arr[a]+=k;
        if(b+1<=n)
        arr[b+1]-=k;
    }
    for(i=1;i<=n;i++)
    {
        x+=arr[i];
        if(max<x)
        max=x;
    } 
    printf("%lld",max);
    return 0;
       
}