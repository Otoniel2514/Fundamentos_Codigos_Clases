#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    cout<<endl;
    cout<<"Calcular la distancia de puntos en un plano cartesiano. \nEl proceso se realizara tomando tanto los valores de 'x' como de 'y' de ambos puntos"<<endl;
    cout<<"\n";

    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, distancia = 0, p = 0, q = 0;

    cout<<"Cual es el valor de 'X' del primer punto: "<<endl;
    cin>>x1;
    cout<<"Cual es el valor de 'Y' del primer punto: "<<endl;
    cin>>y1;
    cout<<"Cual es el valor de 'X' del segundo punto: "<<endl;
    cin>>x2;
    cout<<"Cual es el valor de 'Y' del segundo punto: "<<endl;
    cin>>y2;

    cout<<endl<<endl;

    p = x2 - x1;
    q = y2 - y1;

    distancia = sqrt(pow(p,2)+pow(q,2));

    cout.precision(4);
    cout<<"La distancia del punto 1 al punto 2 es de: "<<distancia<<" unidades"<<endl;

    return 0;

}