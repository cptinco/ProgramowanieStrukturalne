#include <stdio.h>
#include <stdlib.h>

void funkcja(int n, int *w)
{
    *w=n;
}

int main()
{
    int x=7,y=8;
    funkcja(x, &y);
    printf("%d",y);
    return 0;
}
