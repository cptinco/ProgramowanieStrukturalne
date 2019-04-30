#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt
{
    float x,y,z;
};

float odleglosc(struct punkt p1, struct punkt p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)+pow(p1.z-p2.z,2));
}

float minimum(struct punkt tablica[],int n)
{
    int i,j;
    float temp;
    float mini = odleglosc(tablica[0], tablica[1]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=odleglosc(tablica[i],tablica[j]);
            if (temp <mini)
            {
                mini=temp;
            }
        }
    }
    return mini;
}

int main()
{
    struct punkt p1 = {3,4,5.2};
    struct punkt p2 = {-1,4,5.2};
    struct punkt p3 = {-1.2,8.2,6.2};
    struct punkt tab1[]={p1,p2,p3};
    printf("%f\n",minimum(tab1,3));
    struct punkt tab2[]={{3,3,3},{2,1,-10},{7,2,3.4},{3,3,4}};
    printf("%f\n",minimum(tab2,4));
    return 0;
}
