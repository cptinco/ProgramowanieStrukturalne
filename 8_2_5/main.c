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

void znaki(char*sciezka)
{
    for(int i=0;i<256;i++)
    {
        printf("%d %c %d\n",i,i,licznik(sciezka,i));
    }
}

int main()
{
    znaki("test.txt");
    return 0;
}
