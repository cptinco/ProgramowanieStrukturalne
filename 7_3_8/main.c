#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;

};

struct element * utworz()
{
    return NULL;
};


struct element* znajdz(struct element * lista, int a)
{
    struct element * w=lista;

     while(lista!=NULL)
    {
        if(lista != a)
        {
            lista=lista->next;
            w=lista;
        }
        else
        {
            return lista;
        }
    }
    return NULL;
};


int main()
{
    struct element* example = utworz();
    znajdz(example,5);
    return 0;
}
