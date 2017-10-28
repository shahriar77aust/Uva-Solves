#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int cas =1;
    while(gets(a))
    {
        if(a[0]=='#')
            break;
        if(strcmp(a,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",cas);
            cas++;
        }
        else if(strcmp(a,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",cas);
            cas++;
        }
        else if(strcmp(a,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",cas);
            cas++;
        }
        else if(strcmp(a,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",cas);
            cas++;
        }
        else if(strcmp(a,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",cas);
            cas++;
        }
        else if(strcmp(a,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",cas);
            cas++;
        }
        else
        {
            printf("Case %d: UNKNOWN\n",cas);
            cas++;
        }
    }
    return 0;
}
