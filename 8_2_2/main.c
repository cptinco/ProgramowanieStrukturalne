#include <stdio.h>
#include <stdlib.h>

FILE * otworz(char* plik)
{
    return fopen(plik,"w");
}

void wypisz(FILE*plik)
{
    char c;
    while(fscanf(plik,"%c",&c)==1)
    {
        printf("%c",c);
    }
    fclose(plik);
}

int main()
{
    FILE * pliczek = otworz("test.txt");
    wypisz(pliczek);
    return 0;
}
