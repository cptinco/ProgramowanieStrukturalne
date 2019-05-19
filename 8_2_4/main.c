#include <stdio.h>
#include <stdlib.h>

int licznik(char*sciezka, char z)
{
    char temp;
    FILE*plik=fopen(sciezka,"r");
    int ile=0;
    while(fscanf(plik,"%c",&temp)==1)
    {
        if (z==temp)
        {
            ile++;
        }
    }
    fclose(plik);
    return ile;
}

int licznik2(char*sciezka, wchar_t z)
{
    wchar_t temp;
    FILE*plik=fopen(sciezka,"r");
    int ile=0;
    while(fscanf(plik,"%lc",&temp)==1)
    {
        if (z==temp)
        {
            ile++;
        }
    }
    fclose(plik);
    return ile;
}

int main()
{
    printf("%d\n",licznik("test.txt",'o'));
    printf("%d\n",licznik2("test.txt",'o'));
    return 0;
}
