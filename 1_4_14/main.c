#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n:");
    scanf("%d",&n);
    for(int i=n-1;i>0;i--)
    {
        for(int j=n-1;j>0;j--)
        {
            for(int k=n-1;k>0;k--)
            {
                if(i*i+j*j==k*k)
                {
                    printf("%i^2+%i^2=%i^2\n",i,j,k);
                }
            }
        }

    }
    return 0;
}
