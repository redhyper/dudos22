#ifndef IZDELIA_H_INCLUDED
#define IZDELIA_H_INCLUDED

class Izdelia{
private:
    char name[30];
    int cod;
    char marka[15];
    int ves;
public:
    Izdelia();
    Izdelia(char*n, int c, char*m, int v);
    ~Izdelia();

    const char *getname();
    int getcode();
    const char *getmarka();
    int getves();

    void setname(char*n);
    void setcode(int c);
    void setmarka(char*m);
    void setves(int v);

    void poisk(Izdelia mas[], int n);
    void show();

};

#endif // IZDELIA_H_INCLUDED
