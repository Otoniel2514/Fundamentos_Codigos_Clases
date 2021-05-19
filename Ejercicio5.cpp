#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    float distInicial = 0, veloInicial = 0, veloFinal = 0, tiempo = 0, aceleracion = 0, disTotal =0;

    cout<<endl<<"====CALCULAR LA DISTANCIA TOTAL===="<<endl;
    cout<<endl;
    cout<<"Ingrese la distancia inicial: "<<endl;
    cin>>distInicial;
    cout<<"Ingrese la velocidad inicial: "<<endl;
    cin>>veloInicial;
    cout<<"Ingrese la velocidad final: "<<endl;
    cin>>veloFinal;
    cout<<"Ingrese el tiempo recorrido en m/s : "<<endl;
    cin>>tiempo;

    //Calculamos la aceleracion
    aceleracion = (veloFinal - veloInicial) / tiempo;

    //Calculamos la distancia total
    disTotal= distInicial + veloInicial * tiempo + 1/2 * aceleracion * pow(tiempo,2);
    cout<<"\n";
    cout<<"La distancia total es: "<<disTotal<<endl;

    return 0;
}



    
    
    
