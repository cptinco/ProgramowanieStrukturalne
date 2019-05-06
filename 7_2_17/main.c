#include <stdio.h>
#include <stdlib.h>

enum plec
{
    K,M
};

enum M
{
    wolny, zonaty
};

enum K
{
    wolna, mezatka
};

union czlowiek
{
    enum M m;
    enum K k;
};

struct daneosobowe
{
    char imie[15];
    char nazwisko[50];
    enum plec p;
    union czlowiek stanCywilny;
};

void wczytaj(struct daneosobowe tablica[], int n)
{
    int temp;
    for (int i=0;i<n;i++)
    {
        printf("podaj plec: 1 - kobieta, 2 - mezczyzna\n");
        scanf("%d",&temp);
        if (temp==1)
        {
            tablica[i].p=K;
        }
        else
        {
            tablica[i].p=M;
        }
        printf("podaj imie\n");
        scanf("%s",tablica[i].imie);
        printf("podaj nazwisko\n");
        scanf("%s",tablica[i].nazwisko);
        printf("podaj stan cywilny\n");
        if (tablica[i].p==K)
        {
            printf("0- wolna, 1 - mezatka\n");
        }
        else
        {
            printf("0- wolny, 1 - zonaty\n");
        }
        scanf("%d",&tablica[i].stanCywilny.k);
    }
}

int main()
{
    struct daneosobowe tablica[2];
    wczytaj(tablica,2);
    return 0;
}
