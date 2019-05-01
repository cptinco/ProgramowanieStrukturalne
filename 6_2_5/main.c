#include <stdio.h>
#include <stdlib.h>

int*** alokuj(int n, int m, int k) //funkcja z pierwszego zadania 6_2_1 roszerzona o wymair
{
    int ***tab=malloc(n*sizeof(int**));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int**));
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=malloc(k*sizeof(int));
        }
    }
    return tab;
}

void zwolnij(int n, int m, int k, int ***tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            free(*(*(tab+i)+j));
        }
        free(*(tab+i));
    }
    free(tab);
}

int main()
{
    int***tablica=alokuj(3,4,5);
    zwolnij(3,4,5,tablica);
    return 0;
}
