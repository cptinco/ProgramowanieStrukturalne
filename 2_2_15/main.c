#include <stdio.h>
#include <stdlib.h>

int potega(int liczba, int wykl)
{
    int wynik=1;
    for(int i=1;i<=wykl;i++)
    {
        wynik*=liczba;
    }
    return wynik;
}

//rozwiazanie a

void rozklad(int n, int wykl)
{
    for(int i=n-1;i>0;i--)
    {
        for(int j=n-1;j>0;j--)
        {
            if(potega(i,wykl)+potega(j,wykl)==n)
            {
                printf("%i^%i+%i^%i=%i\n",i,wykl,j,wykl,n);
            }
        }

    }
}

//rozwiazadanie b

void rozklad2(int n, int wykl)
{
    for(int i=n-1;i>0;i--)
    {
        for(int j=n-1;j>0;j--)
        {
            if(potega(i,wykl)+potega(j,wykl)==n && i<=j)
            {
                printf("%i^%i+%i^%i=%i\n",i,wykl,j,wykl,n);
            }
        }

    }
}




int main()
{
    int wykl=3;
    printf("a \n");
    rozklad(28,3);
    printf("b \n");
    rozklad2(28,3);
    return 0;
}
