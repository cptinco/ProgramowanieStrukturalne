#include <stdio.h>
#include <stdlib.h>

double pseudolos(int n)
{
    if (n==0)
        return 0.4;
    return 1-pseudolos(n-1)*pseudolos(n-1);
}

int main()
{
    int n;
    printf("Podaj n:");
    scanf("%d",&n);
    printf("%lf",pseudolos(n));
    return 0;
}
