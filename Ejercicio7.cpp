#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    float sueldo;

    cout<<"Ingrese el sueldo: "<<endl;
    cin>>sueldo;

    if(sueldo < 1000)
    {
        sueldo = sueldo + (sueldo * 0.15); 
        cout<<"El nuevo sueldo al aplicarle el 15% de aumento es: $"<<sueldo<<endl; 
    }
    else
    {
        sueldo = sueldo + (sueldo * 0.12);
        cout<<"El nuevo sueldo al aplicarle el 12% de aumento es: $"<<sueldo<<endl;
    }
    cout<<"El nuevo sueldo del que dispone es: $ "<<sueldo<<endl;
    
    return 0;
}
