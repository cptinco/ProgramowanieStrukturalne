#include <stdio.h>
#include <stdlib.h>

int** alokuj(int n, int m) //funkcja z pierwszego zadania 6_2_1
{
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int*));
    }
    return tab;
}

void zwolnij(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        free(*(tab+i)); //zwolnienie komórek w wierszu
    }
    free(tab); //zwolnienie wierszy
}

int main()
{
    int**tablica=alokuj(3,4);
    zwolnij(3,4,tablica);
    return 0;
}
