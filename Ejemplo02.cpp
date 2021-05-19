#include "iostream"
using namespace std;
int main()
{
    int a, b, i, suma;

    cout<<endl;
    cout<<"SUMAR TODOS LOS INTERVALOS ENTEROS."<<endl;

    cout<<"Digite los valores de a y b: "<<endl;
    cin>>a>>b;

    suma = 0;
    for(int i = a; i <= b; i = i + 1)
    {
          cout<<suma<<endl;
          suma = suma + i;
    }
        cout<<"La suma de los enteros del intervalo es: "<<suma<<endl;
        cout<<endl;
        return 0;
}