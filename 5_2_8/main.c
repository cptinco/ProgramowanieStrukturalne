#include <stdio.h>
#include <stdlib.h>

void foo(char*napis)
{
    for(int i=0;napis[i]!=0;i++)
    {
        if (napis[i]>='a' && napis[i]<='z')
        {
            napis[i]-=('a'-'A');
        }
    }
}

int main()
{
    char w1[]="helloWs3";
    foo(w1);
    printf("%s",w1);
    return 0;
}
