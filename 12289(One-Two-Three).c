#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int t,i;
    scanf("%d",&t);
    while(t!=0)
        {
            scanf("%s",a);
            int l =strlen(a);
            if(l==5||(a[0]=='t'&&l>3))
            {
                printf("%d\n",3);
            }
            else if(l==3)
            {
                    if((a[0]=='t'||a[1]=='w')&&a[2]!='e')
                    {
                        printf("%d\n",2);
                    }
                    else if(a[0]=='t'&&a[1]=='w'&&a[2]=='e')
                    {
                        printf("%d\n",2);

                    }
                    else
                    {
                        printf("%d\n",1);
                    }
            }
            t--;
        }


}
