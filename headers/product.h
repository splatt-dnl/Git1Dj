#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;
class product{
    string nameProduct, id;
    int stock;
    double prize;
public:
    product(string&, string&, int&, double&);
    string getId()const;
    void setId(string&);
    string getName()const;
    void setName(string&);
    int getStock()const;
    void setStock(int&);
    double getPrize()const;
    void setPrize(double&);
    string infoProduct()const;
};
#endif // PRODUCT_H
