#include "iostream"
using namespace std;
int main()
{
    unsigned char vocal;

    cout<<endl;
    cout<<"VOCALES ABIERTAS Y CERRADAS."<<endl<<endl;

    cout<<"Digite una vocal: "<<endl;
    cin>>vocal;

    switch (vocal)
    {
    case 'a':
        cout<<"Es una vocal abierta"<<endl;
        break;
    case 'A':
        cout<<"Es una vocal abierta"<<endl;
        break;
    case 'e':
        cout<<"Es una vocal abierta"<<endl;
        break;
    case 'E':
        cout<<"Es una vocal abierta"<<endl;
        break;
    case 'i':
        cout<<"Es una vocal cerrada"<<endl;
        break;
    case 'I':
        cout<<"Es una vocal cerrada"<<endl;
        break;
    case 'o':
        cout<<"Es una vocal abierta"<<endl;
        break;
    case 'O':
        cout<<"Es una vocal abierta"<<endl;
        break;
    case 'u':
        cout<<"Es una vocal cerrada"<<endl;
        break;
    case 'U':
        cout<<"Es una vocal cerrada"<<endl;
        break;
    
    default:
    cout<<"No ha digitado una vocal"<<endl;
        break;
    }
    cout<<endl;
    return 0;
}