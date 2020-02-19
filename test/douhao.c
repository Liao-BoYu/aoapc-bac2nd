#include<stdio.h>
int main()
{
   int a,b,c;
   a = (b = 3,(c = b + 4) + 5);
   printf("%d %d %d\n",a,b,c);
   return 0;
}
