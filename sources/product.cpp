#include <headers/product.h>

product::product(string &i, string &n, int &s, double &p):id(i), nameProduct(n), stock(s), prize(p){}
string product::getId()const{
    return id;
}
void product::setId(string &i){
    this->id=i;
}
string product::getName() const{
    return nameProduct;
}
void product::setName(string &n){
    this->nameProduct=n;
}
int product::getStock() const{
    return stock;
}
void product::setStock(int &s){
    this->stock=s;
}
double product::getPrize() const{
    return prize;
}
void product::setPrize(double &p){
    this->prize=p;
}
string product::infoProduct() const{
    return "ID: "+id+"\t"+nameProduct+"\t"+to_string(stock)+"\t"+to_string(prize)+"\n";
}
