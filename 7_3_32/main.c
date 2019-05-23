#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

struct element * polacz(struct element * lista1, struct element * lista2)
{
    //tworzymy dwa wskazniki - jeden na nową listę, drugi do przechodzenia po elementach
    struct element * lista, * wsk;
    //jesli pierwsza lista jest usta, to zgodnie z poleceniem nic nie powinnismy polaczyc
    if (lista1==NULL)
    {
        return NULL;
    }
    //ustawiamy oba wskazniki na poczatek pierwszej list
    wsk=lista1,
    lista=wsk;
    //przechodzimy do kolejnego elementu i robimy polaczenie po jednym z kazdego
    lista1=lista1->next;
    wsk->next=lista2;
    wsk=lista2;
    lista2=lista2->next;
    //petla dopoki nie wyczerpiemy elementów pierwszej listy, w zadaniu mamy listy rownej dlugosci wiec nie musimy sprawdzac czy na drugiej nie jest NULL
    while(lista1!=NULL)
    {
        //przepisanie elemeny z pierwszej listy
        wsk->next=lista1;
        wsk=lista1;
        //przejscie na kolejny elementy pierwszej listy
        lista1=lista1->next;
        //przepisanie elemeny z drugiej listy
        wsk->next=lista2;
        wsk=lista2;
        //przejscie na kolejny elementy drugiej listy
        lista2=lista2->next;
    }
    return lista;

}

int main() {
    //przykladowa pierwsza lista
    struct element * lista = NULL; //tworzymy "pustą listę"
    //dodajemy pierwszy element na listę (tu pojęcie koniec czy początek nie ma większego sensu)
    struct element * wsk = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk->i=-4;
    wsk->next=NULL; //bo nic więcej nie ma na liście
    lista=wsk; // ustawiamy wskaznik początku listy
    // dodajemy nowy element na początek
    struct element * wsk2 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk2->i=7;
    wsk2->next=lista; // następnik nowego elementu to bieżacy wskaznik listy
    lista=wsk2;  // ustawiamy wskaznik nowego elementy jako początek listy
    // dodajemy jeszcze jeden nowy element na początek
    struct element * wsk3 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk3->i=5;
    wsk3->next=lista; // następnik nowego elementu to bieżacy wskaznik listy
    lista=wsk3;  // ustawiamy wskaznik nowego elementy jako początek listy
    //tu już mamy listę jak na rysunku - pierwszy eleemnt yo 5, drugi to 7, trzeci to i 4
    // teraz dodajemy 11 na początek
    struct element * wsk4 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk4->i=11;
    wsk4->next=lista; // następnik nowego elementu to bieżacy wskaznik listy
    lista=wsk4;  // ustawiamy wskaznik nowego elementy jako początek listy

    //przykladowa druga lista
    struct element * lista2 = NULL; //tworzymy "pustą listę"
    //dodajemy pierwszy element na listę (tu pojęcie koniec czy początek nie ma większego sensu)
    struct element * wsk21 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk21->i=-13;
    wsk21->next=NULL; //bo nic więcej nie ma na liście
    lista2=wsk21; // ustawiamy wskaznik początku listy
    // dodajemy nowy element na początek
    struct element * wsk22 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk22->i=8;
    wsk22->next=lista2; // następnik nowego elementu to bieżacy wskaznik listy
    lista2=wsk22;  // ustawiamy wskaznik nowego elementy jako początek listy
    // dodajemy jeszcze jeden nowy element na początek
    struct element * wsk23 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk23->i=12;
    wsk23->next=lista2; // następnik nowego elementu to bieżacy wskaznik listy
    lista2=wsk23;  // ustawiamy wskaznik nowego elementy jako początek listy
    //tu już mamy listę jak na rysunku - pierwszy eleemnt yo 5, drugi to 7, trzeci to i 4
    // teraz dodajemy 11 na początek
    struct element * wsk24 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
    wsk24->i=44;
    wsk24->next=lista2; // następnik nowego elementu to bieżacy wskaznik listy
    lista2=wsk24;  // ustawiamy wskaznik nowego elementy jako początek listy

    //laczenie list
    struct element * nowaLista = polacz(lista,lista2);
    return 0;
}
