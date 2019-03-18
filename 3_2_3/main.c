#include <stdio.h>
#include <stdlib.h>

void zamiana(int*a, int*b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}

int main()
{
    int x=5, y=7;
    printf("%d %d \n",x,y);
    zamiana(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
