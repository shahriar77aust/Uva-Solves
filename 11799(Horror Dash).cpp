#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,a[100000],cas =1,s;
    cin >> t;
    while(t!=0)
    {
        cin >> c;
        for(int i=0;i<c;i++)
        {
            cin >> a[i];
        }

        sort(a,a+c);
        printf("Case %d: %d\n",cas,a[c-1]);
        t--;
        cas++;
    }
    return 0;
}
