#include "iostream"
#include "iomanip"
using namespace std;
int main()
{
    cout<<endl;
    cout<<"CALCULO DE DESCUENTO POR COMPRA."<<endl<<endl;

    float TotalCompra, Descuento, TotalPagar;
    
    cout<<"Digite el total de la compra: "<<endl;
    cin>>TotalCompra;

    if (TotalCompra >= 60)
        Descuento = TotalCompra * 0.2;
    else
        Descuento = 0;

    TotalPagar = TotalCompra - Descuento;

    cout<<fixed<<setprecision(2);
    cout<<"Su descuento es: $"<<Descuento<<endl;
    cout<<"El total a pagar por la compra es: $"<<TotalPagar<<endl;
    
    return 0;

}