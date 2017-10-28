#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            printf("%lld\n",a-b);
        }
        else if(b>a)
        {
            printf("%lld\n",b-a);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
