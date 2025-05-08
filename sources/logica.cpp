#include <headers/logica.h>

void logica::add(string i,string n, int s, double p){
    a.addProduct(new product(i, n, s, p));
}
void logica::list(){
    for(product* p:a.getProducts()){
        cout<<p->infoProduct()<<endl;
    }
}
string logica::searchP(string&i){
    for(product* p:a.getProducts()){
        if(p->getId()==i){
            return p->infoProduct();
        }
    }
    return "No encontrado\n";
}
string logica::searchS(string&i){
    for(product* p:a.getProducts()){
        if(p->getId()==i){
            return "Stock de :"+to_string(p->getStock())+" unidades\n";
        }
    }
    return "No encontrado\n";
}


