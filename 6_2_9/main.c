#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=0;
        }
    }
}

int** alokuj(int n, int m)
{
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
}

int main()
{
    int**tablica=alokuj(3,4); //stworzenie tablicy
    **tablica=0; //ustawienie wartosci w miejsce 0,0
    *(*(tablica+2))=7;  //ustawienie wartosci w miejsce 2,0
    *(*(tablica+2)+1)=8;  //ustawienie wartosci w miejsce 2,1
    *(*tablica+1)=-2;  //ustawienie wartosci w miejsce 0,1
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("[%d %d] = %d\n",i,j,*(*(tablica+i)+j)); //wartosc
        }
    }
    foo(tablica,3,4);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("[%d %d] = %d\n",i,j,*(*(tablica+i)+j)); //wartosc
        }
    }
    return 0;
}
