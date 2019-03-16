#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n:");
    scanf("%d",&n);
    int suma=0;
    for (int i=1;i<n;i++)
    {
        int pom, a=i, b=n;

        while(b!=0)
        {
            pom = b;
            b = a%b;
            a = pom;
        }
        if (a==1)
        {
            suma+=i;
        }

    }
    printf("%d",suma);
    return 0;
}
