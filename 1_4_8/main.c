#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;
    int suma=1;
    int poprzednik=0;
    printf("Podaj n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        suma+=poprzednik;
        poprzednik=suma-poprzednik;
    }
    printf("n-ty wyraz ciagu: %d",suma);
    getchar();
    return 0;
}
