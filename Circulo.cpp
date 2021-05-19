#include "iostream"
#include "math.h"
using namespace std;
int main(void)
{
    float AreaSup, volEsf, radio;

    cout<<"CALCULO DEL AREA SUPERFICIAL Y EL VOLUMEN DE UNA ESFERA"<<endl;

    cout<<"Digite el area de la esfera: "<<endl;
    cin>>radio;

    AreaSup = 4 * M_PI * pow(radio, 2);
    volEsf = 4/3 * M_PI * pow(radio, 3);

    cout<<"El area superficial es: "<<AreaSup<<endl;
    cout<<endl;
    cout<<"El volumen es: "<<volEsf<<endl;
    cout<<endl;

    return 0;

}