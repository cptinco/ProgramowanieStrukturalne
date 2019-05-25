#include <stdio.h>
#include <stdlib.h>

void przepisz(int n, int m, int ** tab)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=tab[i][m-1];
        for(int j=m-1;j>0;j--)
        {
            tab[i][j]=tab[i][j-1];
        }
        tab[i][0]=temp;
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
    int ** tablica = alokuj(2,3);
    **tablica=0;
    *(*tablica+1)=-2;
    *(*tablica+2)=3;
    *(*(tablica+1))=7;
    *(*(tablica+1)+1)=-7;
    *(*(tablica+1)+2)=31;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            //printf("%d\n",*(*(tablica+i)+j));
            printf("%d\n",tablica[i][j]);
        }
    }
    przepisz(2,3,tablica);
    printf("---\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",*(*(tablica+i)+j));
        }
    }
    return 0;
}
