#include <stdio.h>
#include <stdlib.h>

void zeruj(int n, int m, int tab[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j]=0;
        }
    }
}

int(* alokuj(int n, int m))[]
{
    return malloc(n*sizeof(int[m]));
}

int main()
{
    //przypadek testowy 1
    int n=3, m=2;  //zmienne na rozmiar
    int **tablica; //stworzenie tablicy
    tablica=alokuj(n,m); //przypisanie do tablicy wyniku funkcji
    *tablica=0; //ustawienie wartosci w miejsce 0,0
    *(tablica+2*m)=7;  //ustawienie wartosci w miejsce 2,0
    *(tablica+2*m+1)=8;  //ustawienie wartosci w miejsce 2,1
    *(tablica+1)=-2;  //ustawienie wartosci w miejsce 0,1
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d %d] = %d\n",i,j,*(tablica+i*m+j)); //wartosc
        }
    }
    zeruj(n,m,tablica);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d %d] = %d\n",i,j,*(tablica+i*m+j)); //wartosc
        }
    }
    //przypadek testowy 2
    int tablica2[2][3] = {{3,4,5},{5,2,1}};
    zeruj(2,3,tablica2);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d %d] = %d\n",i,j,tablica2[i][j]); //wartosc
        }
    }
    return 0;
}
