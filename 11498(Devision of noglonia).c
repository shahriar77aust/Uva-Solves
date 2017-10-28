#include<stdio.h>
int main()
{
    int k,x,y,a,b;
    while(scanf("%d",&k)==1)
    {
        if(k==0)
        {
            break;
        }
        else
        {
            scanf("%d %d",&x,&y);
            while(k!=0)
            {
                scanf("%d %d",&a,&b);
                if(a==x||b==y)
                {
                    printf("divisa\n");
                }
                else if(a>x&&b>y)
                {
                    printf("NE\n");
                }
                else if(a>x&&b<y)
                {
                    printf("SE\n");
                }
                else if(a<x&&b>y)
                {
                    printf("NO\n");
                }
                else
                {
                    printf("SO\n");
                }
                k--;

            }
        }
    }
    return 0;
}
