#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int i;
    while(gets(a))
    {
        for(i =0;i<strlen(a);i++)
        {
            char c = a[i];
            printf("%c",c-7);
        }
        printf("\n");
    }
}
