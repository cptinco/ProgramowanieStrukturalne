#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //bilioteka by pozbyc sie warningu to isspace

void wypisz(char*sciezka)
{
    FILE*plik= fopen(sciezka,"r");
    char z;
    while(fscanf(plik,"%c",&z)==1)
    {
        if (!isspace(z))
        {
            printf("%c",z);
        }
    }
    fclose(plik);
}

void wypisz2(char*sciezka)
{
    FILE*plik= fopen(sciezka,"r");
    wchar_t z;
    while(fscanf(plik,"%lc",&z)==1)
    {
        if (!iswspace(z))
        {
            wprintf(L"%lc",z);
        }
    }
    fclose(plik);
}

int main()
{
    wypisz("test.txt");
    printf("\n----\n");
    wypisz2("test.txt");
    return 0;
}
