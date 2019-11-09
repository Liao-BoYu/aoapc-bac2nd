#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%100)
        if (n%4==0)
            printf("yes\n");
        else
            printf("no\n");
    else
        printf("no\n");
    return 0;
}

