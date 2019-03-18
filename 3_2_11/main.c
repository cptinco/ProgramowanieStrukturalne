#include <stdio.h>
#include <stdlib.h>

int* funkcja(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    printf("%#010x",funkcja(3));
    return 0;
}
