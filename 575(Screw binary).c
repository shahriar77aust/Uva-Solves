#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char ar[10000];
    long long int sum=0,i,temp,l,p;
    while(1)
    {
        scanf("%s",ar);
        if(ar[0]=='0')
        {
            break;
        }
        else
        {
            l =strlen(ar);
            for(i=0;i<strlen(ar);i++)
            {
                temp = ar[i]-'0';
                p =pow(2,l);
                p =p-1;
                temp =temp*p;
                sum =sum+temp;
                l=l-1;
            }
            printf("%lld\n",sum);
            sum=0;
        }

    }
    return 0;

}
