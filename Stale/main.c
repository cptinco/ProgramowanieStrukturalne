#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int const *a=&i; //wskaznik na stala wartosc
    int * const b=&i; //sta³y wskaznik
    *a = 1;  /* kompilator zaprotestuje */
    *b = 2;  /* ok */
    a = b;   /* ok */
    b = a;  /* kompilator zaprotestuje */
    return 0;
}
