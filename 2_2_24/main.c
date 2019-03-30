#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    if (n==0 || n==1)
        return 1;
    return 2*funkcja(n-1);
}

int main()
{
    printf("%d",funkcja(4));
    return 0;
}
