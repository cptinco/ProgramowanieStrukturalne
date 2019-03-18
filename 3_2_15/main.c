#include <stdio.h>
#include <stdlib.h>

void funkcja(int const *a , int* b)
{
    *b=*a;
}

int main()
{
    int a=2, b=3;
    printf("%d %d \n",a,b);
    funkcja(&a,&b);
    printf("%d %d \n",a,b);
    return 0;
}
