#include <stdio.h>
#include <stdlib.h>

static int liczba=0;

void funkcja()
{
    liczba++;
    printf("Liczba wywolan: %d \n",liczba);
}
int main()
{
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    return 0;
}
