#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int a;
    struct lista* wskaznik;
};

int main()
{
    struct lista lista1;
    struct lista lista2;
    lista2.a=5;
    lista2.wskaznik=&lista1;
    return 0;
}
