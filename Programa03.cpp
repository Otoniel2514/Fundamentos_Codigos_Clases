#include "iostream"
using namespace std;
int main()
{
    int edad;
    float x;

    cout<<endl;
    cout<<"Ejemplos de ingresos de datos"<<endl<<endl;

    cout<<"La variable edad usa "<<sizeof(edad)<<" bytes "<<endl;
    cout<<"Esta en la direccion de memoria: "<<&edad<<endl;
    cout<<"La variable x usa "<<sizeof(x)<<" bytes "<<endl;
    cout<<"Esta en la direccion de memoria: "<<&x<<endl;
    cout<<"El tipo double usa "<<sizeof(double)<<" bytes "<<endl;

    cout<<"Digite su edad: ";
    cin>>edad;
    cout<<"Su edad es: "<<"edad"<<"\n"<<endl;

    return 0;
}