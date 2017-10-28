#include<bits/stdc++.h>
#include<cmath>


using namespace std;

long long t, n;

int main() {
    scanf("%lld", &t);
    while(t!=0) {
        scanf("%lld", &n);
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        n /= 10;
        n = abs(n % 10);
        printf("%lld\n",n);
        t--;
    }
}
