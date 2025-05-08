#include<headers/registro.h>
registro::registro(){
    do{
        menu(opt);
        ejecutar(opt);
    }while(opt!='x');
}
void registro::menu(char &o)
{
    cout<<"-----REGISTRO DE PRODUCTOS-----"<<endl;
    cout<<"-------[r] REGISTRAR-----------"<<endl;
    cout<<"-------[l]  LISTAR ------------"<<endl;
    cout<<"-------[b]  BUSCAR ------------"<<endl;
    cout<<"-------[s]  STOCK ------------"<<endl;
    cout<<"-------[x]  SALIR -------------"<<endl;
    cout<<"Elija una opcion: "<<endl;
    cin>>o;
}

void registro::ejecutar(char &o){
    string name, id;
    int stock;
    double prize;
    switch(o){
        case 'r':{
            cout<<"\n***** Registro de Producto *****"<<endl;
            cout<<"ID del producto: "<<endl;
            cin>>id;
            cin.ignore();
            cout<<"Nombre del producto: "<<endl;
            getline(cin, name);
            cout<<"Unidades del producto: "<<endl;
            cin>>stock;
            cout<<"Precio del producto: "<<endl;
            cin>>prize;
            //llamar al controlador
            l.add(id,name,stock, prize);
            cout<<"\n------Registro Exitoso! :D ------\n"<<endl;
            break;
        }
        case 'l':{
            cout<<"\nProductos ingresados: "<<endl;
            //llamar al controlador
            l.list();
            break;
        }
        case 'b':{
            cout<<"\nID del producto a buscar: "<<endl;
            cin>>id;
            //llamar al controlador
            cout<<l.searchP(id)<<endl;
            break;
        }
        case 's':{
            cout<<"\nID del producto a buscar su stock: "<<endl;
            cin>>id;
            //llamar al controlador
            cout<<l.searchS(id)<<endl;
            break;
        }
        case'x':{
            cout<<"\nFin de la aplicacion"<<endl;
            break;
        }
        default:
            cout<<"\nOpcion Invalida"<<endl;
            break;
    }

}
