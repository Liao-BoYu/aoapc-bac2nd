#include<stdio.h>
int main()
{
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a, b, c, count = 0;
    while(scanf("%d%d%d", &a, &b, &c) == 3 && !(a == 0 && b == 0 && c ==0 ))
        printf("Case %d: %.*lf\n", ++count, c, (double)a/b);
    return 0;
}
