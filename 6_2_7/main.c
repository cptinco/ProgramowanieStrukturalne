#include <stdio.h>
#include <stdlib.h>

int** foo(int n)
{
    int** tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc((i+1)*sizeof(int));
    }
    return tab;
}

int main()
{
    int**tablica=foo(4); //stworzenie tablicy
    **tablica=0; //ustawienie wartosci w miejsce 0,0
    *(*(tablica+2))=7;  //ustawienie wartosci w miejsce 2,0
    *(*(tablica+2)+1)=8; //ustawienie wartosci w miejsce 2,1
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("[%d %d] = %d,",i,j,*(*(tablica+i)+j)); //wartoœæ
            printf("%p\n",*(tablica+i)+j); //adres
        }
    }
    return 0;
}
