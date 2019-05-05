#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int a;
    unsigned int b;
};

int main()
{
    union super_int liczba;
    liczba.a=5;
    liczba.b=7;
    return 0;
}
