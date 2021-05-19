#include "iostream"
using namespace std;

int main(void)
{
    //En este programa se calcula el saldo a pagar en una pupuseria.

    int cantidadPupQueso;
    int cantidadPupRevueltas;
    float pago;

    cout<<endl;
    cout<<"EL EJEMPLO DE LAS PUPUSAS"<<endl<<endl;

    //Pedir al usuario que ingrese los datos
    cout<<"Digite la cantidad de pupusas de queso que se comio: "<<endl;
    cin>>cantidadPupQueso;
    cout<<"Digite la cantidad de pupusas de revueltas que se comio: "<<endl;
    cin>>cantidadPupRevueltas;

    pago = cantidadPupQueso * 0.60 + cantidadPupRevueltas * 0.50;

    cout<<"El monto a paragar por sus pupusas es: $"<<pago; //Cantidad a pagar por las pupusas.
    
    cout<<endl;
    return 0;

}