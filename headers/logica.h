#ifndef LOGICA_H
#define LOGICA_H
#include <headers/almacen.h>
class logica{
    almacen a;
public:
    void add(string, string,int, double);
    void list();
    string searchP(string&);
    string searchS(string&);
};
#endif // LOGICA_H
