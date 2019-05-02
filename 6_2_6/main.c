#include <stdio.h>
#include <stdlib.h>

int (**alokuj(unsigned int n, unsigned int m, unsigned int k))[]
{
    return malloc(n * sizeof(int[m][k]));
}

void zwolnij(unsigned int n, unsigned int m, unsigned int k, int t[][m][k])
{
    free(t);
}

int main()
{
    int n = 3, m = 4, k = 3;
    int (**tab)[] = alokuj(n, m, k);
    zwolnij(n, m, k, tab);
    return 0;
}
