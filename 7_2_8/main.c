#include <stdio.h>
#include <stdlib.h>

struct student
{
    char imie[20];
    char nazwisko[20];
    char adres[50];
    char pesel[11];
    char kierunek[20];
    char nr_legitymacji[5];
};

struct student wpisz(struct student *s)
{
    scanf("%s",&s->imie);
    scanf("%s",&s->nazwisko);
    scanf("%s",&s->adres);
    scanf("%s",&s->pesel);
    scanf("%s",&s->kierunek);
    scanf("%s",&s->nr_legitymacji);
    return *s;
}


int main()
{
    struct student s;
    s=wpisz(&s);
    printf("%s\n",s.imie);
    printf("%s\n",s.nazwisko);
    printf("%s\n",s.adres);
    printf("%s\n",s.pesel);
    printf("%s\n",s.kierunek);
    printf("%s\n",s.nr_legitymacji);
    return 0;
}
