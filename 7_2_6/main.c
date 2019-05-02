#include <stdio.h>
#include <stdlib.h>

struct punktn
{
    float *tab;
    int wymiar;
};

void przepisz(struct punktn t1[], struct punktn t2[], int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        t2[i].wymiar=t1[i].wymiar;
        t2[i].tab=malloc(t2[i].wymiar*sizeof(float));
        for(int j=0;j<t1[i].wymiar;j++)
        {
            t2[i].tab[j]=t1[i].tab[j];
        }
    }
}

void infoPunkt(struct punktn tablica)
{
    for(int i=0;i<tablica.wymiar;i++)
    {
        printf("%f ",tablica.tab[i]);
    }
    printf("\n");
}

int main()
{
    int n=3;
    struct punktn punkcik[n];
    punkcik[0].wymiar=3;
    punkcik[0].tab=malloc(3*sizeof(float));
    punkcik[0].tab[0]=7;
    punkcik[0].tab[1]=4;
    punkcik[0].tab[2]=5;
    punkcik[1].wymiar=3;
    punkcik[1].tab=malloc(3*sizeof(float));
    punkcik[1].tab[0]=7.4;
    punkcik[1].tab[1]=-54;
    punkcik[1].tab[2]=-5.1;
    punkcik[2].wymiar=3;
    punkcik[2].tab=malloc(3*sizeof(float));
    punkcik[2].tab[0]=5;
    punkcik[2].tab[1]=2;
    punkcik[2].tab[2]=1.3;
    infoPunkt(punkcik[0]);
    infoPunkt(punkcik[1]);
    infoPunkt(punkcik[2]);
    struct punktn punkcik2[n];
    przepisz(punkcik, punkcik2,3);
    infoPunkt(punkcik2[0]);
    infoPunkt(punkcik2[1]);
    infoPunkt(punkcik2[2]);
    return 0;
}
