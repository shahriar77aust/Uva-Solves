#include<stdio.h>
#include<string.h>
char s[10000];
long long int minimize(long long int l);
long long int addDigit(long long int s);
int main()
{

    long long int a,b,c,l,sums;
    while(gets(s))
    {
        if(s[0]=='0')
            break;
        l =strlen(s);
        sums = minimize(l);
        while(sums>9)
        {
            sums = addDigit(sums);
        }
        printf("%lld\n",sums);

    }
    return 0;
}
long long int minimize(long long int l)
{
    long long int i,sum=0;
    for(i=0;i<l;i++)
    {
        sum=sum+(s[i]-'0');
    }
    return sum;
}
long long int addDigit(long long int s)
{
    long long int sum =0;
    while(s!=0)
    {
        sum =sum+s%10;
        s=s/10;
    }
    return sum;
}
