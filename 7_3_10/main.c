#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworz()
{
    struct element * wskaznik = malloc(sizeof(struct element));
    wskaznik->next=NULL;
    return wskaznik;
};

int main()
{
    struct element* l1 = utworz();
    struct element* l2 = dodaj(l1,2);
    struct element* l3 = dodaj(l2,4);
    return 0;
}
