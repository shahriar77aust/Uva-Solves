#include<stdio.h>
int main()
{
int a,b,c,sum,i,j;
while(scanf("%d",&c)==1)
{
    for(j=1;j<=c;j++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        for(i=a;i<=b;i=i+1)
        {

            if(i%2==1)
                {
                    sum=sum+i;
                }
        }
    printf("Case %d: %d\n",j,sum);
    }
}
return 0;
}
