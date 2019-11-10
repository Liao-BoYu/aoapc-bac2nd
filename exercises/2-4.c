#include<stdio.h>
int main()
{
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n, m, kase = 0;
    while(scanf("%d%d", &n, &m) == 2 && n && m)
    {
        long double y = 0.0;
        for(int i = 0; i <= m-n; i++)
        {
            long long x = (n+i)*(n+i);
            y += 1.0/x;
        }
        printf("Case %d: %.5Lf\n", ++kase, y);
    }
    return 0;
}
