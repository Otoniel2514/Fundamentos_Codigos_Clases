//Divisiones 
#include "iostream"
#include "stdlib.h"
using namespace std;
int main(void)
{
    cout<<endl;
    cout<<"Prueba de operadores de division"<<endl;
    cout<<"El cociente de dividir 7 entre 2 es: " << 7 / 2<<endl;
    cout<<"El residuo entero de dividir 7 entre 2 es: " << 7 % 2<<endl;

    cout<<"El residuo de dividir 7 entre 2 es: " << 7.0 / 2<<endl;
    cout<<"El residuo de dividir 7 entre 2 es: " << 7 / 2.0<<endl;
    cout<<"El residuo de dividir 7 entre 2 es: " << 7.0 / 2.0<<endl;
    cout<<"El residuo de dividir 7 entre 2 es: " << 7 / (float) 2<<endl;
    cout<<"El residuo de dividir 7 entre 2 es: " << (float) (7 / 2)<<endl;
    printf("El residuo  de dividir 7 entre 2 es: %2.1f\n",(float) (7 / 2));

    cout<<"Quiero desplegar esto: "<< (int) 4.83<<endl;
    cout<<endl;
    return 0;
}