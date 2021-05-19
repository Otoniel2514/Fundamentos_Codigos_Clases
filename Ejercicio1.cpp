#include "iostream"
using namespace std;
int main()
{
    cout<<endl;
    cout<<"====== MENU======"<<endl;
    cout<<"1. Sumar 2 numeros."<<endl;
    cout<<"2. Restar 2 numeros."<<endl;
    cout<<"3. Multiplicar 2 numeros."<<endl;
    cout<<"4. Dividirr 2 numeros."<<endl;
    cout<<"Ingrese la opcion numerica que prefiera: ";
    int opcion;
    cin>>opcion;

       if(opcion == 1)
       {
           float numero1, numero2;
           cout<<"Ingrese el numero 1: "<<endl;
           cin>>numero1;
           cout<<"Ingrese el numero 2: "<<endl;
           cin>>numero2;
           cout<<"La suma es: "<<numero1 + numero2<<endl;
       }
       else if(opcion == 2)
       {
           float numero1, numero2;
           cout<<"Ingrese el numero 1: "<<endl;
           cin>>numero1;
           cout<<"Ingrese el numero 2: "<<endl;
           cin>>numero2;
           cout<<"La resta es: "<<numero1 - numero2<<endl;
       }
       else if(opcion == 3)
       {
           float numero1, numero2;
           cout<<"Ingrese el numero 1: "<<endl;
           cin>>numero1;
           cout<<"Ingrese el numero 2: "<<endl;
           cin>>numero2;
           cout<<"El producto es: "<<numero1 * numero2<<endl;
       }
       else if(opcion == 4)
       {
           float numero1, numero2;
           cout<<"Ingrese el numero 1: "<<endl;
           cin>>numero1;
           cout<<"Ingrese el numero 2: "<<endl;
           cin>>numero2;
           if(numero2 == 0)
           {
            cout<<"El divisor no puede ser 0"<<endl;
           } 
           else
           {
             cout<<"La division es: "<<numero1 / numero2<<endl;
           }
       }
       else  
       {
           cout<<"La opcion ingresada no existe."<<endl;
       }

    return 0;       
}