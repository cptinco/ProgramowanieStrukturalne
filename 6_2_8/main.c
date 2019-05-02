#include <stdio.h>
#include <stdlib.h>

void foo(int tab[][100], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            *(*(tab+i)+j)=0;
        }
    }
}

int main()
{
    int tablica[50][100];
    *(*(tablica+4)+1)=5;
    foo(tablica,50);
    return 0;
}
