#include "iostream" 
using namespace std;
int main(void)
{
int n;
cout << endl;
cout << "DETERMINAR SI UN NUMERO ES POSITIVO O NEGATIVO" << endl << endl;
cout << "Digite un numero entero: ";
cin >> n;

if(n >= 0)
{
cout << "El numero " << n << " es positivo" << endl;

}
else
{
cout << "El numero " << n << " es negativo" << endl;
}
cout << endl;
return 0;
}