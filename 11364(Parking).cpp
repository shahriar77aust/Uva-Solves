#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int t,zero=0,other=0,i,cas=1,n,val;
    while(scanf("%d",&t)==1)
    {
        while(t!=0)
        {
            int dis =0;
            scanf("%d",&n);
            for(i =0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            sort(a,a+n);
            for(i =0;i<n-1;i++)
            {
                val = a[i+1]-a[i];
                dis = dis +val;
            }
            val = a[n-1]-a[0];
            dis =dis+val;
            printf("%d\n",dis);
            t--;
        }
    }
    return 0;

}
