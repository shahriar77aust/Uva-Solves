#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[100000],sum,s,i,temp=0;
    while(scanf("%d",&n)==1)
    {
        sum = (n-1)*n;
        sum =sum/2;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            s=abs(a[i]-a[i+1]);
            temp=temp+s;

        }
        if(temp == sum)
        {
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
        temp =0;

    }
}
