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

    a[0]=Izdelia("�������", 1, "�����", 1);
    a[1]=Izdelia("���������", 2, "�����", 1);
    a[2]=Izdelia("��������� ��� ������", 3, "������", 1);
    a[3]=Izdelia("�����������", 4, "��������", 3);
    a[4]=Izdelia("�������", 5, "�����", 2);
    a[5]=Izdelia("��������", 6, "�����", 6);
    a[6]=Izdelia("��������", 7, "������", 2);
    a[7]=Izdelia("�������", 8, "�������", 1);
    a[8]=Izdelia("���������", 9, "��������", 2);
    a[9]=Izdelia("��������", 10, "������", 4);
    return 0;
}
