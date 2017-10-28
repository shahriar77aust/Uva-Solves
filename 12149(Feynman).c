#include <stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        long long s,sum=0;
        for(i=1;i<=n;i++)
        {
            s=i*i;
            sum=sum+s;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
/*
The problem asks given a number n how many squares are there in n by n grid. The relation can be found
out by drawing n*n sqares and counting the squares. Since it will be very hard to draw and count more
than 4 by 4 grid. We can try 1 by 1, 2 by 2, 3 by 3, 4 by 4 grid and count the number of squares.
From there we can try to guess an equation.

For,
1*1 grid =   1 Square = 1
2*2 grid =   5 Square = 1 + 2^2
3*3 grid = 14 Square = 1 + 2^2 + 3^2
4*4 grid = 30 Square = 1 + 2^2 + 3^2 + 4^2

Here the series is,
1^2 + 2^2 + 3^2 + 4^2 + ….. n^2
Which is the sum of first n squares.

Instead of calculating with this formula a simpler formula exists.
1^2 + 2^2 + … + n^2 = n(n + 1)(2n + 1) / 6
**/
