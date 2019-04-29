#include <stdio.h>
#include <stdlib.h>

int** f(int n, int m)
{
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int*));
    }
    return tab;
}

int main()
{
    int**tablica=f(3,4); //stworzenie tablicy
    **tablica=0; //ustawienie wartosci w miejsce 0,0
    *(*(tablica+2))=7;  //ustawienie wartosci w miejsce 2,0
    *(*(tablica+2)+1)=8;  //ustawienie wartosci w miejsce 2,1
    *(*tablica+1)=-2;  //ustawienie wartosci w miejsce 0,1
    //pêtla by sprawdziæ co jest w tablicy i jakie s¹ adres
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("[%d %d] = %d,",i,j,*(*(tablica+i)+j)); //wartoœæ
            printf("%p\n",*(tablica+i)+j); //adres
        }
    }
    return 0;
}
