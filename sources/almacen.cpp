#include <headers/almacen.h>

bool almacen::addProduct(product * p){
    products.push_back(p);
    return true;
}

vector<product *> almacen::getProducts() const{
    return products;
}
