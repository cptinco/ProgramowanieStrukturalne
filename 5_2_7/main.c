#include <stdio.h>
#include <stdlib.h>

void sklej(char*napis1, char*napis2, char*napis3)
{
    int i,j;
    for(i=0;napis1[i]!=0;i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0;napis2[j]!=0;j++)
    {
        napis3[i+j]=napis2[j];
    }
    napis3[i+j]=0;
}

void sklej2(wchar_t*napis1, wchar_t*napis2, wchar_t*napis3)
{
    int i,j;
    for(i=0;napis1[i]!=0;i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0;napis2[j]!=0;j++)
    {
        napis3[i+j]=napis2[j];
    }
    napis3[i+j]=0;
}

int main()
{
    char w1[]="Ala m";
    char w2[]="a kota.";
    char w3[]="fjgkhdgjhfhdgfh";
    sklej(w1,w2,w3);
    printf("%s\n",w3);
    wchar_t ww1[]=L"Ala m";
    wchar_t ww2[]=L"a kota.";
    wchar_t ww3[]=L"fjgkhdgjhfhdgfh";
    sklej2(ww1,ww2,ww3);
    wprintf(L"%s\n",ww3);
    return 0;
}
