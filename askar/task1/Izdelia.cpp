#include "Izdelia.h"
#include <stdio.h>
#include <string.h>

Izdelia::Izdelia()
{
    strcpy(name,"");
    strcpy(marka,"");
    cod=1234;
    ves=1234;
}
Izdelia::Izdelia(char*n, int c, char*m, int v)
{
    strcpy(name, n);
    cod=c;
    strcpy(marka, m);
    ves=v;
}
Izdelia::~Izdelia()
{

}

    const char *Izdelia:: getname()
    {
        scanf("%s", name);
        return name;
    }
    int Izdelia:: getcod()
    {
        scanf("%d", &cod);
        return cod;
    }
    const char *Izdelia:: getmarka()
    {
        scanf("%s", marka);
        return marka;
    }
    int Izdelia:: getves()
    {
        scanf("%d", &ves);
        return ves;
    }

    void Izdelia:: setname(char*n)
    {
        strcpy(name,n);
    }
    void Izdelia:: setcod(int c)
    {
        cod=c;
    }
    void Izdelia:: setmarka(char*m)
    {
        strcpy(marka, m);
    }
    void Izdelia:: setves(int v)
    {
        ves=v;
    }

void Izdelia::poisk(Izdelia mas[], int n)
{
    printf("\nВывод вешалки:\n\n");
    for (int i=0; i<n; i++)
        if (strcmp(mas[i].name,"Вешалка")==0)
            mas[i].show();
    printf("\nВывод всех изделий с весом в 1 у.е.:\n\n");
    for (int i=0; i<n; i++)
        if (mas[i].ves==1)
            mas[i].show();
    printf("\nВывод изделя с кодом 5:\n\n");
    for (int i=0; i<n; i++)
        if (mas[i].cod==5)
            mas[i].show();
}
void Izdelia::show()
{
    printf("%s %d %s %d", name, cod, marka, ves);
    printf("\n");
}
