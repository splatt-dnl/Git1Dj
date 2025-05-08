#ifndef ALMACEN_H
#define ALMACEN_H
#include <headers/product.h>
#include <vector>
class almacen{
    vector <product*> products;
public:
    bool addProduct(product*);
    vector<product*> getProducts()const;
};
#endif // ALMACEN_H
