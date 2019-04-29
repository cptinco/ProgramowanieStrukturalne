#include <stdio.h>
#include <stdlib.h>

int(* f(int n, int m))[]
{
    return malloc(n*sizeof(int[m]));
}

int main()
{
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(int));
    int n=3, m=4;  //zmienne na rozmiar
    int **tablica; //stworzenie tablicy
    tablica=f(n,m); //przypisanie do tablicy wyniku funkcji
    *tablica=0; //ustawienie wartosci w miejsce 0,0
    *(tablica+2*m)=7;  //ustawienie wartosci w miejsce 2,0
    *(tablica+2*m+1)=8;  //ustawienie wartosci w miejsce 2,1
    *(tablica+1)=-2;  //ustawienie wartosci w miejsce 0,1
    //pêtla by sprawdziæ co jest w tablicy i jakie s¹ adres
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d %d] = %d,",i,j,*(tablica+i*m+j)); //wartoœæ
            printf("%p\n",tablica+i*m+j); //adres
        }
    }

    return 0;
}
