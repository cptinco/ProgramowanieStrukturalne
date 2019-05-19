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

char topZnak(char*sciezka)
{
    char temp;
    int max=0;
    for(int i=0;i<256;i++)
    {
        if (licznik(sciezka,i)>max)
        {
            max=licznik(sciezka,i);
            temp=i;
        }
    }
    return temp;

}

int main()
{
    printf("%c\n",topZnak("test.txt"));
    printf("%c\n",topZnak("test2.txt"));
    return 0;
}
