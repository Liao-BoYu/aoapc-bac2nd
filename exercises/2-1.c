#include<stdio.h>
int main()
{
    for(int x = 100; x <= 999; x++)
    {
        int A = x/100;
        int B = x/10%10;
        int C = x%10;
        if (x == A*A*A + B*B*B + C*C*C) printf("%d\n",x);
    }
    return 0;
}
