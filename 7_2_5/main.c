#include <stdio.h>
#include <stdlib.h>

struct punkt10
{
    float tab[10];
};

void przepisz(struct punkt10 t1[], struct punkt10 t2[], int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        t2[i]=t1[i];
    }
}

void infoPunkt(struct punkt10 tablica, int rozmiar) //pomocnicza fukcja do wyœwietlenie struktury
{
    for(int i=0;i<rozmiar;i++)
    {
        printf("%f ",tablica.tab[i]);
    }
    printf("\n");
}

int main()
{
    struct punkt10 punkcik[]={{12.5,3,4,5,5,-2.3,2,1,6,7},{4,3,4,-7,5,8.3,2,9,6,-7},{14,3,24,-7,25,8.3,22,9,6,-7}};
    infoPunkt(punkcik[0],10);
    infoPunkt(punkcik[1],10);
    infoPunkt(punkcik[2],10);
    struct punkt10 punkcik2[]={{2,3,42,5,25,-2.3,2,1,6,7},{24,35,34,-7,55,8.3,25,9,6,-7},{414,3,24,-74,25,8.3,22,94,6,-7}};
    infoPunkt(punkcik2[0],10);
    infoPunkt(punkcik2[1],10);
    infoPunkt(punkcik2[2],10);
    przepisz(punkcik, punkcik2,3);
    infoPunkt(punkcik2[0],10);
    infoPunkt(punkcik2[1],10);
    infoPunkt(punkcik2[2],10);
    return 0;
}
