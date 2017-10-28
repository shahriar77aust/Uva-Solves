#include <stdio.h>
#include <string.h>

int main ()
{
    int t,sum=0,amount=0;
    char a [10000];
    scanf ("%d", &t);
    while (t!=0)
     {
        scanf ("%s", a);
        if (strcmp (a, "donate")==0)
        {
            scanf ("%d", &amount);
            sum=sum+amount;
        }
        else
        {
            printf ("%d\n", sum);
        }
        t--;
    }

    return 0;

}
