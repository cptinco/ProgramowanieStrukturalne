#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element* dodaj(struct element*Lista, int a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
};

struct element * utworz()
{
    return NULL;
};

int main()
{
    struct element* l1 = utworz();
    struct element* l2 = dodaj(l1,2);
    struct element* l3 = dodaj(l2,4);
    return 0;
}
