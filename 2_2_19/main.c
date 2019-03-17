#include <stdio.h>
#include <stdlib.h>

static int suma =0;

int funkcja()
{
    int n;
    printf("Podaj n:");
    scanf("%d",&n);
    suma+=n;
    printf("suma %d \n",suma);
    return n;

}

int main()
{
    printf("liczba %d \n",funkcja());
    printf("liczba %d \n",funkcja());
    printf("liczba %d \n",funkcja());
    return 0;
}
