#include <stdio.h>
#include <stdlib.h>

void wypisz(char*napis)
{
    printf("%s",napis);
}

void wypisz2(wchar_t*napis)
{
    wprintf(L"%s",napis);
}

int main()
{
    wypisz("abc");
    wypisz2(L"def");
    return 0;
}
