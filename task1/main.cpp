#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Izdelia.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    const int n=10

    Izdelia a[n];

    a[0]=Izdelia("Вешалка", 1, "сталь", 1);
    a[1]=Izdelia("Подставка", 2, "сталь", 1);
    a[2]=Izdelia("Подставка для цветов", 3, "золото", 1);
    a[3]=Izdelia("Раскладушка", 4, "алюминий", 3);
    a[4]=Izdelia("Сушилка", 5, "жесть", 2);
    a[5]=Izdelia("Скамейка", 6, "сталь", 6);
    a[6]=Izdelia("Банкетка", 7, "железо", 2);
    a[7]=Izdelia("Табурет", 8, "серебро", 1);
    a[8]=Izdelia("Стремянка", 9, "алюминий", 2);
    a[9]=Izdelia("Этажерка", 10, "железо", 4);
    return 0;
}
