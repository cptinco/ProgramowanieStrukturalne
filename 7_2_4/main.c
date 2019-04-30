#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    float x,y,z;
};

void foo(struct punkt t1[], struct punkt t2[], int n)
{
    for(int i =0;i<n;i++)
    {
        t2[i]=t1[i];
    }
}

int main()
{
    struct punkt tab1[]={{3,3,3},{2,1,-10},{7,2,3.4},{3,3,4}};
    struct punkt tab2[]={{3,8,3},{2,1,9},{7,1,3.4},{2,3,4}};
    foo(tab1,tab2,4);
    return 0;
}
