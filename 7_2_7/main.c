#include <stdio.h>
#include <stdlib.h>

struct zespolone
{
    float re;
    float im;
};

struct zespolone dodaj(struct zespolone z1, struct zespolone z2)
{
    struct zespolone temp;
    temp.re=z1.re+z2.re;
    temp.im=z1.im+z2.im;
    return temp;
}

int main()
{
    struct zespolone liczba1={3,4};
    struct zespolone liczba2={2,5};
    struct zespolone suma=dodaj(liczba1, liczba2);
    printf("%f+%f*i",suma.re,suma.im);
    return 0;
}
