#include <stdio.h>
#include <stdlib.h>

int * f(int n,double*tab)
{
    double *a=malloc(n*sizeof(double));
    for(int i=0;i<n;i++)
    {
        a[i]=tab[i];
    }
    return a;
}
int main(void)
{
    double tab[7] = {2.9,3.7,4.1,5,5.0,4.2,3.2};
    int*tab2=f(7,tab);
    return 0;
}
