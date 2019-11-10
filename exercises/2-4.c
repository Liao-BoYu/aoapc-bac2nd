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
        long long x = n, y = m;
        double z = 0.0;
        for(; x <= y; x++)
            z += 1.0/(double)(x*x);
        printf("Case %d: %.5f\n", ++kase, z);
    }
    return 0;
}
