#include <stdio.h>
#include <stdlib.h>

int foo(char*napis1, char*napis2)
{
    int i;
    for(i=0;napis1[i]!=0&&napis2[i]!=0;i++)
    {
        if (napis1[i]>napis2[i])
            return 0;
    }
    if (napis1[i]!=0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    char w1[]="abck";
    char w2[]="defrr";
    printf("%d\n",foo(w1,w2));
    return 0;
}
