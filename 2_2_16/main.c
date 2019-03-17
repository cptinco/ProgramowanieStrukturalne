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

//funkcja która sprawa czy n jest kwadratem liczby naturalnej
int czyPotega(int n, int m)
{
    int wynik=0;
    for(int i=0;i<=n;i++)
    {
        if (potega(i,m)==n)
            wynik=1;
    }
    return wynik;
}

// funkcja do wypisania tablicy
void print(int n, int * a) {
    int i ;
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

//generowanie rozkladu
void partition(int n, int * a, int level, int m){
    int first;
    int i;
    if (n < 1) return;
    if (czyPotega(n,m))
    {
        a[level] = n;
        print(level, a);
    }
    if (level == 0)
    {
        first=1;
    }
    else
    {
        first=a[level-1];
    }
    for(i = first; i <= n/2 ; i++){
        if (czyPotega(i,m))
        {
            a[level] = i;
            partition(n - i, a, level + 1,m);
        }
    }
}
int main(){
    int n = 10;
    int m = 3;
    int * a = (int * ) malloc(sizeof(int) * n);
    partition (n, a, 0,m);
    return(0);
}
