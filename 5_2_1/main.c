#include <stdio.h>
#include <stdlib.h>

void wyczysc(char* napis)
{
    napis[0]=0;
}

void wyczysc2(wchar_t* napis)
{
    napis[0]=0;
}

int main()
{
    char wyraz[]="abcd";
    wyczysc(wyraz);
    printf("%s \n",wyraz);
    wchar_t wyraz2[]=L"abcd";
    wyczysc2(wyraz2);
    wprintf(L"%s  \n",wyraz2);
    return 0;
}
