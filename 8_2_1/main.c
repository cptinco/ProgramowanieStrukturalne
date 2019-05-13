#include <stdio.h>
#include <stdlib.h>

FILE * otworz(char* plik)
{
    return fopen(plik,"r");
}

int main()
{
    FILE * pliczek = otworz("test.txt");
    return 0;
}
