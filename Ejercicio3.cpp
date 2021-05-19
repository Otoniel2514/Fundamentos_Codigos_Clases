#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    float a, b, c;

    //Pedir al usuario los datos
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"Ingrese el valor de c: ";
    cin>>c;

    float D = pow(b, 2) - (4*a*c);

    if(D > 0)
    {
        float X1 = (-b + sqrt(D))/(2*a);
        float X2 = (-b - sqrt(D))/(2*a);

        cout<< "X1: "<<X1<<endl;
        cout<<"X2: "<<X2<<endl;
    }
    else if (D == 0)
    {
        float X = (-b + sqrt(D))/(2*a);
        cout<<"X: "<<X<<endl;
    }
    else if (D < 0)
    {
        cout<<"No tiene solucion real"<<endl;
    }
    return 0;
}