#include <stdio.h>
#include <stdlib.h>

int fun1(int n)
{
    return n;
}

int fun2(int n)
{
    return n%5;
}

int fun3(int n)
{
    return (n*n+2*n)/(n+2);
}

int funkcja(int (* f1)(int), int (* f2)(int), unsigned int n)
{
    for(int i = 0; i <= n; i++)
    {
         if(f1(i) != f2(i))
            return 0;
    }
    return 1;
}

int main()
{
    printf("%d \n", funkcja(&fun1,&fun2,5));
    printf("%d \n", funkcja(&fun1,fun3,7));
    printf("%d \n", funkcja(fun2,fun3,9));
    return 0;
}
