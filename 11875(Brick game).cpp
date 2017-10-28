#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    int a[1000];
    int i,temp,j,num,cas,test;
    scanf("%d",&test);
    while(test!=0)
    {
        cin.ignore();
        cas =1;
        while(test!=0)
        {
            temp=j=0;
            getline(cin,s);
            for(i=0;i<s.length();i++)
            {
                if(s[i]>='0'&&s[i]<='9')
                {
                    num = s[i]-'0';
                    temp = temp*10+num;
                }
                else
                {
                    a[j]=temp;
                    j++;
                    temp =0;
                }
            }
            a[j]=temp;
            sort(a,a+j+1);
            j =j/2+1;
            printf("Case %d: %d\n",cas,a[j]);
            cas++;
            test--;
       }
    }


    return 0;

}
