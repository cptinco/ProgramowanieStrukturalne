#include <stdio.h>
#include <stdlib.h>

// funkcja do wypisania tablicy od indeksu 0 do n
void print(int n, int * a) {
    int i ;
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

//generowanie rozkladu
void integerPartition(int n, int * a, int level){
    int first;
    int i;
    if (n < 1) return;
    a[level] = n;
    print(level, a);
    if (level == 0)
    {
        first=1;
    }
    else
    {
        first=a[level-1];
    }
    for(i = first; i <= n/2 ; i++){
        a[level] = i;
        integerPartition(n - i, a, level + 1);
    }
}
int main(){
    int n = 4;//okreslamy n
    int * a = (int * ) malloc(sizeof(int) * n); //rezerwacja miejsca na tablice
    integerPartition (n, a, 0);
    return(0);
}
