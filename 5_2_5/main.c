#include <stdio.h>
#include <stdlib.h>

void przepisz(char*napis,char*napis2)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {
        napis2[i]=napis[i];
    }
    napis2[i]=0; //warto ustawic koniec napis
}

void przepisz2(wchar_t*napis,wchar_t*napis2)
{
    int i;
    for(i=0;napis[i]!=0;i++)
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
    przepisz(wyraz,wyraz2);
    printf("%s\n",wyraz2);
    wchar_t wyraz3[]=L"hellortg";
    wchar_t wyraz4[]=L"dsgoiohruijhjhkmnb";
    wprintf(L"%s\n",wyraz4);
    przepisz2(wyraz3,wyraz4);
    wprintf(L"%s\n",wyraz4);
    return 0;
}
