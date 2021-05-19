#include "iostream"
using namespace std;
int main()
{
    int X;

    cout<<endl<<endl;
    cout<<"DETERMINAR SI UN NUMERO ES POSITIVO O NEGATIVO"<<endl;
    cout<<endl;

    cout<<"Digite un numero entero: "<<endl;
    cin>>X;

    if (X >= 0)
       cout<<"Su numero digitado es un entero positivo."<<endl;
    else
       cout<<"Su numero digitado es un entero negativo."<<endl;

       cout<<endl;

       return 0;
}