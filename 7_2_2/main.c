#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a,b,c;
};

void przepisz(struct trojkat troj1, struct trojkat*troj2)
{
    *troj2=troj1;
}

int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=5.2;
    t1.c=6;
    struct trojkat t2;
    t2.a=9;
    t2.b=-3;
    t2.c=8;
    printf("%lf %lf %lf\n",t1.a, t1.b, t1.c);
    printf("%lf %lf %lf\n",t2.a, t2.b, t2.c);
    przepisz(t1,&t2);
    printf("%lf %lf %lf\n",t1.a, t1.b, t1.c);
    printf("%lf %lf %lf\n",t2.a, t2.b, t2.c);
    return 0;
}
