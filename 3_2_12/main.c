#include <stdio.h>
#include <stdlib.h>

int* funkcja(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    printf("%#010x",funkcja(4));
    return 0;
}
