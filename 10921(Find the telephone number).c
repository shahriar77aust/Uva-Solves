#include<stdio.h>
#include<string.h>
int main()
{
    char ar[10000];
    int i;
    while(gets(ar))
    {
        for(i = 0;i<strlen(ar);i++)
        {
            if(ar[i]>='A'&&ar[i]<='C')
            {
                printf("2");
            }
            else if(ar[i]>='D'&&ar[i]<='F')
            {
                printf("3");
            }
            else if(ar[i]>='G'&&ar[i]<='I')
            {
                printf("4");
            }
            else if(ar[i]>='J'&&ar[i]<='L')
            {
                printf("5");
            }
            else if(ar[i]>='M'&&ar[i]<='O')
            {
                printf("6");
            }
            else if(ar[i]>='P'&&ar[i]<='S')
            {
                printf("7");
            }
            else if(ar[i]>='T'&&ar[i]<='V')
            {
                printf("8");
            }
            else if(ar[i]>='W'&&ar[i]<='Z')
            {
                printf("9");
            }
            else
            {
                printf("%c",ar[i]);
            }
        }
        printf("\n");
    }
}
