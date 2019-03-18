#include <stdio.h>
#include <stdlib.h>

int* funkcja()
{
    return malloc(sizeof(double));
}

int main()
{
    printf("%#010x",funkcja());
    return 0;
}
