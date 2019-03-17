#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,suma=1,s=1;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        s=s*i;
        suma=suma+s;
    }
    printf("%i",suma);
    return 0;
}
