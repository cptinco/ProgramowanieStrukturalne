#include <stdio.h>
#include <stdlib.h>

int funkcja(int*a, int*b)
{
    if (*a<*b)
        return *a;
    else
        return *b;
}

int main()
{
    int x=5,y=7;
    printf("%d",funkcja(&x,&y));
    return 0;
}
