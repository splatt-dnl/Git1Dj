#ifndef REGISTRO_H
#define REGISTRO_H
#include <headers/logica.h>
class registro{
    logica l;
    char opt;
public:
    registro();
    void menu(char&);
    void ejecutar(char&);
};

#endif // REGISTRO_H
