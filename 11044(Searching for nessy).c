#include<stdio.h>
 int main()
 {
   int t,n,m;
   while(scanf("%d",&t)==1)
   {
   while(t!=0)
   {
      scanf("%d %d",&n,&m);
      printf("%d\n",(n/3)*(m/3));
      t--;
    }
   }
   return 0;
 }
