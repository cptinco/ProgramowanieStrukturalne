#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    if (n==0 || n==1)
        return 1;
    if (n%2==0)
    {
        return funkcja(n-1)+n;
    }
    else
    {
        return funkcja(n-1)*n;
    }
}

int main()
{
    printf("%d",funkcja(4));
    return 0;
}
