#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    double Cn, Fh;
    
    cout<<"CONVERTIR GRADOS CENTIGRADOS A FAHRENHEIT"<<endl<<endl;
    cout<<"Digite la cantidad de grados Centigrados"<<endl;
    cin>>Cn;

    Fh = (Cn * 9/5)+32;

    cout<<"\n";
    cout<<"La conversion de grados centigrados a fahrenheit es: "<<Fh<<endl;
    
    return 0;
}