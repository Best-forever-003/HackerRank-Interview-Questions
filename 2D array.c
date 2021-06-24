#include<stdio.h>
int main()
{
    int max=0,sum,i,j,a[6][6],f=1; //max to return greater value ; sum used in loops ; f is float
    for(i=0;i<6;i++)
    for(j=0;j<6;j++)
    scanf("%d",&a[i][j]);
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            sum=a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(f==1)
            {
                max=sum;
                f=0;
            }
            if(max<sum)
            max=sum;
            
        }
    }
    printf("%d",max);
    return 0;
    
}
