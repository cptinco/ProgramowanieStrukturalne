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

int podlogaPierwiastek(int liczba, int stopien)
{
    int wynik;
    for(int i=0;i<=liczba;i++)
    {
        if (potega(i,stopien)<=liczba)
        {
            wynik=i;
        }
    }
    return wynik;
}

int main()
{
    int n,m;
    printf("Podaj n:");
    scanf("%d",&n);
    printf("Podaj m:");
    scanf("%d",&m);
    printf("%d",podlogaPierwiastek(n,m));
    return 0;
}
