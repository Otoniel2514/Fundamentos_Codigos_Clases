#include "iostream"
using namespace std;
int main()
{
    int numDia;

    cout<<endl;
    cout<<"DIAS DE LA SEMANA"<<endl<<endl;

    cout<<"Digite el numero del dia: "<<endl;
    cin>>numDia;

    switch (numDia)
    {
        case 1:
        cout<<"Lunes"<<endl;
        break;
        case 2:
        cout<<"Martes"<<endl;
        break;
        case 3:
        cout<<"Miercoles"<<endl;
        break;
        case 4:
        cout<<"Jueves"<<endl;
        break;
        case 5:
        cout<<"Viernes"<<endl;
        break;
        case 6:
        cout<<"Sabado"<<endl;
        break;
        case 7:
        cout<<"Domingo"<<endl;
        break;
    default:
    cout<<"Numero de dia no valido."<<endl;
        break;
        
        return 0;
    }
}


