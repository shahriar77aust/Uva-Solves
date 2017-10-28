#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int cas =1;
    while(1)
    {
        scanf("%s",a);
        if(a[0]=='*')
            break;
        if(strcmp(a,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",cas);
        }
        else if(strcmp(a,"Umrah")==0)
        {
             printf("Case %d: Hajj-e-Asghar\n",cas);
        }

        cas++;
    }
    return 0;
}
