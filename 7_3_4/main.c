#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element* dodajk(struct element*Lista, int a)
{
    struct element * wsk ;
    if(Lista==NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
};

struct element * utworz()
{
    return NULL;
};


int main()
{
    struct element* l1 = utworz();
    struct element* l2 = dodajk(l1,2);
    struct element* l3 = dodajk(l2,4);
    return 0;
}
