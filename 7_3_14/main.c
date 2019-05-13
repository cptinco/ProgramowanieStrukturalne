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

struct element* dodajk(struct element*Lista, int a)
{
    struct element * wsk ;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    wsk->i=a;
    wsk->next=NULL;
};

void dodajw(struct element*Lista, struct element*elem, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=elem->next;
    elem->next=wsk;
};

int main()
{
    struct element* l1 = utworz();
    dodajk(l1,2);
    dodajk(l1,3);
    dodajw(l1,l1->next,5);
    printf("%d",l1->next->next->i);
    return 0;
}
