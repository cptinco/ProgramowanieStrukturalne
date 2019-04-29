#include <stdio.h>
#include <stdlib.h>

int(* alokuj(int n, int m))[] // z zadania 6_2_2
{
    return malloc(n*sizeof(int[m]));
}

void zwolnij(int n, int m, int tab[][n])
{
    free(tab); //zwolnienie wierszy
}
int main()
{
    int n=3, m=4;  //zmienne na rozmiar
    int **tablica; //stworzenie tablicy
    tablica=alokuj(n,m); //przypisanie do tablicy wyniku funkcji
    zwolnij(n,m,tablica);
    return 0;
}
