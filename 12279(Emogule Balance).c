#include<stdio.h>
int main()
{
    int a[1000];
    int t,zero=0,other=0,i,cas=1,n;
    while(scanf("%d",&n)==1)
    {
            if(n==0)
                break;
            else
                for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                    if(a[i]==0)
                    {
                        zero++;
                    }
                    else
                    {
                        other++;
                    }
                }
            printf("Case %d: %d\n",cas,other-zero);
            zero = other = 0;
            cas++;
    }
    return 0;

}
