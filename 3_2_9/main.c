#include <stdio.h>
#include <stdlib.h>

int funkcja()
{
    return malloc(sizeof(int));
    //int a;
    //return a;
}

int main()
{
    printf("%#010x \n",funkcja());
    return 0;
}
