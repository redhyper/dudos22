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
    strcpy(marka, v);
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
    int Izdelia:: getcode()
    {
        scanf("%d", &code);
        return code;
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
    void Izdelia:: setcode(int c)
    {
        code=c;
    }
    void Izdelia:: setmarka(char*m)
    {
        strcpy(marka, m);
    }
    void Izdelia:: setves(int v)
    {
        strcpy(ves, v);
    }
void Izdelia::poisk(Izdelia mas[], int n)
{
    printf("")
    for (int)










}
