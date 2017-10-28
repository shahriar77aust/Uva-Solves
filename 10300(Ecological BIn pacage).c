#include<stdio.h>
int main()
{
    long long a,t,f,b,c,i,j,s;
    while(scanf("%lld",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            s=0;
            scanf("%lld",&f);
            for(j=0;j<f;j++)
            {
                scanf("%lld%lld%lld",&a,&b,&c);
                s=s+a*c;
            }
            printf("%lld\n",s);
        }
    }
    return 0;
}
