#include<stdio.h>
int a[1000];
int findSwap(int l)
{
    int i=1,temp,s,swaps=0,t,flag;
    start:
    flag =0;
    for(i=1;i<l;i++)
    {
        if(a[i]>a[i+1])
        {
            temp =a[i];
            a[i] =a[i+1];
            a[i+1] =temp;
            swaps++;
            flag=1;
        }
    }
    if(flag==1)
        goto start;
    else
        return swaps;


}
int main()
{
    int i,temp,s,swaps=0,t,l;
    while(scanf("%d",&t)==1)
    {
        while(t!=0)
        {
            scanf("%d",&l);
            for(i=1;i<=l;i++)
            {
                scanf("%d",&a[i]);
            }
            swaps = findSwap(l);
            printf("Optimal train swapping takes %d swaps.\n",swaps);
            t--;
        }
    }

}

