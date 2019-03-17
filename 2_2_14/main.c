#include <stdio.h>
#include <stdlib.h>

//funkcja która sprawa czy n jest kwadratem liczby naturalnej
int isSquare(int n)
{
    int wynik=0;
    for(int i=0;i<=n;i++)
    {
        if (i*i==n)
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
void partition(int n, int * a, int level){
    int first;
    int i;
    if (n < 1) return;
    if (isSquare(n))
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
        if (isSquare(i))
        {
            a[level] = i;
            partition(n - i, a, level + 1);
        }
    }
}
int main(){
    int n = 25;
    int * a = (int * ) malloc(sizeof(int) * n);
    partition (n, a, 0);
    return(0);
}
