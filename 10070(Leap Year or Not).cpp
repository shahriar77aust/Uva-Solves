#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main ()
{
    long flag, m4, m100, m400, m15, m55, i, l, leap;
    char a[1000000];
    int print = 0;
    while (cin >> a){
        if ( print != 0 ){
            printf("\n");
        }
        print = 1;
        leap = flag = m4 = m100 = m400 = m15 = m55 = 0;
        l = strlen (a);
        for (i=0; i< l; i++) {

            m4 = ((m4 * 10) + (a[i]-'0')) % 4;
            m100 = ((m100 * 10) + (a[i]-'0')) % 100;
            m400 = ((m400 * 10) + (a[i]-'0')) % 400;
            m15 = ((m15 * 10) + (a[i]-'0')) % 15;
            m55 = ((m55 * 10) + (a[i]-'0')) % 55;
        }

        if ((m4==0 && m100!=0) || m400==0){
            printf("This is leap year.\n");
            leap = 1;
            flag = 1;
        }
        if (m15==0){
            printf("This is huluculu festival year.\n");
            flag = 1;
        }
        if (leap==1 && m55==0)
        {
            printf("This is bulukulu festival year.\n");
        }
        if (flag==0){
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
