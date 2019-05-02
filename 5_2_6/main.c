#include <stdio.h>
#include <stdlib.h>

void kopiujn(char*napis,char*napis2, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        napis2[i]=napis[i];
    }
    napis2[i]=0; //warto ustawic koniec napis
}

void kopiujn2(wchar_t*napis,wchar_t*napis2, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        napis2[i]=napis[i];
    }
    napis2[i]=0; //warto ustawic koniec napis
}

int main()
{
    char wyraz[]="hello";
    char wyraz2[]="dsgoiohr";
    printf("%s\n",wyraz2);
    kopiujn(wyraz,wyraz2,4);
    printf("%s\n",wyraz2);
    wchar_t wyraz3[]=L"hellortg";
    wchar_t wyraz4[]=L"dsgoiohruijhjhkmnb";
    wprintf(L"%s\n",wyraz4);
    kopiujn2(wyraz3,wyraz4,3);
    wprintf(L"%s\n",wyraz4);
    return 0;
}
