#include "iostream"
using namespace std;
int main(void)
{
    float lado, AreaCuad;

    cout<<endl;
    cout<<"CALCULO DEL AREA DE UN CUADRADO"<<endl<<endl;

    cout<<"Digite la longitud de los lados : "<<endl;
    cin>>lado;

    AreaCuad = lado * lado;
 
    cout<<"El area del cuadrado es: "<<AreaCuad<<endl;

    cout<<endl;

    return 0;
}