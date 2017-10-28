#include<stdio.h>
long long int pali(long long int x);
long long int revers(long long int y);
int main()
{
    long long n,p,t,k,i,num,rev,temp,ite=0;
    while(scanf("%lld",&n)==1)
    {
        for(i =0;i<n;i++)
        {
            scanf("%lld",&num);
            start:
            rev = revers(num);
            temp = rev+num;
            p = pali(temp);
            if(p!=1)
            {
                num = temp;
                ite++;
                goto start;
            }
            else
            {
                ite++;
                printf("%lld %lld\n",ite,temp);
                ite =0;
            }
        }
    }
}
long long int revers(long long int x)
{
    long long int t=0,y,z;
    while(x!=0)
    {
        t=t*10;
        z=x%10;
        x =x/10;
        t=t+z;
    }
    return t;
}
long long int pali(long long int x)
{
    long long int y;
    y =revers(x);
    if(y==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
