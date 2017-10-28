#include<stdio.h>
long long int check(long long int a,long long int b);
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        long long int res = check(a,b);
        if(res>0)
        {
            printf("%lld carry operations.\n",res);
        }
        else
        {
            printf("No carry operation.\n");
        }
    }
}
long long int check(long long int a,long long int b)
{
    long long int res =0;
    long long int x,y,c=0;
    while(a!=0&&b!=0)
    {
        x = a%10;
        y = b%10;
        x =x +y+c;
        a=a/10;
        b=b/10;
        if(x>9)
        {
            c =1;
            res++;
        }
        else
            c=0;
    }
    return res;
}

