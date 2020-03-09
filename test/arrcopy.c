#include<stdio.h>
int main()
{
    char arch[15],b[10];
    for(int i = 0;i < 9;i++)
        arch[i] = 1;
    arch[9] = '\0';
    printf("%s\n", arch);
    return 0;
}
