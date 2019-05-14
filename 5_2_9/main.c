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

int dlugosc2(wchar_t* napis)
{
    int i =0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

void wytnij(char*napis, int n, int m)
{
    int dlug=dlugosc(napis);
    if (m<=dlug)
    {
        for(int i=0;i+m<dlug;i++)
        {
            napis[n+i]=napis[i+m+1];
        }
    }
    else if((n<dlug)&&(dlug+1<m))
    {
        napis[n]=0;
    }
}

void wytnij2(wchar_t*napis, int n, int m)
{
    int dlug=dlugosc2(napis);
    if (m<=dlug)
    {
        for(int i=0;i+m<dlug;i++)
        {
            napis[n+i]=napis[i+m+1];
        }
    }
    else if((n<dlug)&&(dlug+1<m))
    {
        napis[n]=0;
    }
}

int main()
{
    char wyraz[]="informatyka";
    wytnij(wyraz,3,5);
    printf("%s\n",wyraz);
    wchar_t wyraz2[]=L"informatyka";
    wytnij2(wyraz2,3,5);
    wprintf(L"%s",wyraz2);
    return 0;
}
