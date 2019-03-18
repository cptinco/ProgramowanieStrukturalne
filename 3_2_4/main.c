#include <stdio.h>
#include <stdlib.h>

void funkcja(int *a,int *b)
{
    if(*a>*b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
}

int main()
{
    int x=7,y=8;
    funkcja(&x, &y);
    printf("%d %d \n",x,y);
    int s=7,t=6;
    funkcja(&s, &t);
    printf("%d %d \n",s,t);
    return 0;
}
