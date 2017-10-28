#include<bits/stdc++.h>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
    char a[10000];
    while(gets(a))
    {
        stack<char> stk;

        for(int i=0;i<strlen(a);i++)
        {

            if(a[i]!=' ')
            {
                stk.push(a[i]);
            }

            else
            {
               while(!stk.empty())
               {
                    cout << stk.top();
                    stk.pop();
               }
               printf(" ");
            }
        }
        while(!stk.empty())
        {
            cout << stk.top();
            stk.pop();
        }
        printf("\n");
    }

    return 0;
}
