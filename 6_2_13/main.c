#include <stdio.h>
#include <stdlib.h>

int(* alokuj(int n, int m))[] // z zadania 6_2_2
{
    return malloc(n*sizeof(int[m]));
}

int suma(int n, int m, int tab[][n])
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            suma+=tab[i][j];
        }
    }
    return suma;
}

int main()
{
    int tablica[100][100];
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            tablica[i][j]=2;
        }
    }
    printf("%d",suma(100,100,tablica));
    return 0;
}
