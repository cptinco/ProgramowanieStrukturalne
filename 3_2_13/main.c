#include<stdlib.h>
#include<stdio.h>
double fun(int x)
{
    return x+1;
}

double funkcja(double (*fun)(int arg),int a)
{
    return fun(a);
}
main()
{
    int a=1,arg,x;
    printf("%lf",funkcja((&fun),a));
    return 0;
}
