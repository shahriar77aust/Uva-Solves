#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cas =1,n,ar[3],s;
    scanf("%d",&n);
    while(n!=0)
    {
        for(int i=0;i<3;i++)
        {
            cin >> ar[i];
        }
        s = sizeof(ar)/sizeof(ar[0]);
        sort(ar,ar+s);
        printf("Case %d: %d\n",cas,ar[1]);
        cas++;
        n--;
    }
}
