#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

float obwod(struct trojkat param)
{
    return param.a+param.b+param.c;
}

int main()
{
    struct trojkat t1;
    t1.a=4.2;
    t1.b=7;
    t1.c=2;
    printf("%f",obwod(t1));
    return 0;
}
