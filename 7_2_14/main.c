#include <stdio.h>
#include <stdlib.h>

enum Czworokat
{
    kwadrat, prostokat, trapez, romb
};

int main()
{
    enum Czworokat cz1 = kwadrat;
    switch(cz1)
    {
        case prostokat:
            printf("prostokat\n");
            break;
        case romb:
            printf("romb\n");
            break;
        default:
            printf("cos innego\n");
            break;
    }
    return 0;
}
