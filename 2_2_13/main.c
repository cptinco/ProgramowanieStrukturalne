#include <stdio.h>
#include <stdlib.h>

//rozwiazanie a

void rozklad(int n)
{
    for(int i=n-1;i>0;i--)
    {
        for(int j=n-1;j>0;j--)
        {
            if(i*i+j*j==n)
            {
                printf("%i^2+%i^2=%i\n",i,j,n);
            }
        }

    }
}

//rozwiazadanie b

void rozklad2(int n)
{
    for(int i=n-1;i>0;i--)
    {
        for(int j=n-1;j>0;j--)
        {
            if(i*i+j*j==n && i<=j)
            {
                printf("%i^2+%i^2=%i\n",i,j,n);
            }
        }

    }
}




int main()
{
    printf("a \n");
    rozklad(20);
    printf("b \n");
    rozklad2(20);
    return 0;
}
