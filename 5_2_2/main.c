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

void wyczysc(char* napis)
{
    napis[0]=0;
}

int dlugosc2(char*napis)
{
    if (napis[0]==0)
    {
        return 0;
    }
    return dlugosc2(++napis)+1;

}

int dlugosc3(wchar_t* napis)
{
    int i =0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int main()
{
    char tab[]="hello";
    printf("%d\n",dlugosc(tab));
    printf("%d\n",dlugosc2(tab));
    wyczysc(tab);
    printf("%d\n",dlugosc(tab));
    wchar_t tab2[]=L"hello";
    printf("%d\n",dlugosc3(tab2));
    return 0;
}
