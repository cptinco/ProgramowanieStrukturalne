#include <stdio.h>
#include <stdlib.h>

int dlugosc(char* napis)
{
    int i =0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int porownaj(char*napis1, char*napis2)
{
    int d1 = dlugosc(napis1);
    int d2 = dlugosc(napis2);
    if (d1 != d2)
    {
        return 0;
    }
    for(int i=0;i<d1;i++)
    {
        if (napis1[i]!=napis2[i])
        {
            return 0;
        }
    }
    return 1;
}

int dlugosc2(wchar_t* napis)
{
    int i =0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int porownaj2(wchar_t*napis1, wchar_t*napis2)
{
    int d1 = dlugosc2(napis1);
    int d2 = dlugosc2(napis2);
    if (d1 != d2)
    {
        return 0;
    }
    for(int i=0;i<d1;i++)
    {
        if (napis1[i]!=napis2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char w1[]="hello";
    char w2[]="hello";
    char w3[]="abc";
    char w4[]="abcde";
    printf("%d\n",porownaj(w1,w2));
    printf("%d\n",porownaj(w1,w3));
    printf("%d\n",porownaj(w1,w4));
    wchar_t w11[]=L"hello";
    wchar_t w12[]=L"hello";
    wchar_t w13[]=L"abc";
    wchar_t w14[]=L"abcde";
    printf("%d\n",porownaj2(w11,w12));
    printf("%d\n",porownaj2(w11,w13));
    printf("%d\n",porownaj2(w11,w14));
    return 0;
}
