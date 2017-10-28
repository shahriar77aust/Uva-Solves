#include<stdio.h>
#include<string.h>
int main()
{
    long int i,count =0,flag,l;
    char s[100000];
    while(gets(s))
    {
        flag=1;
        l =strlen(s);
        for(i=0;i<l;i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                if(flag==1)
                {
                    count++;
                    flag=0;
                }
            }
            else
            {
                    flag=1;
            }
        }
        printf("%d\n",count);
        count =0;
    }
}
