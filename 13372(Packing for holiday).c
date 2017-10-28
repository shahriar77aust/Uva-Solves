#include<stdio.h>
int main()
{
    int a,b,c,t,x,cas=0;
    while(scanf("%d",&t)==1)
    {
        for(x=0;x<t;x++)
        {
        scanf("%d%d%d",&a,&b,&c);
        cas++;
        if(a<=20&&b<=20&&c<=20)
        {
            printf("Case %d: good\n",cas);
        }
        else
        {
            printf("Case %d: bad\n",cas);
        }
        }
        cas =0;

    }
    return 0;
}
