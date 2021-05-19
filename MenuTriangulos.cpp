#include "iostream"
 using namespace std;
int main(void)
{
    int opcion;
    float perimetro;
    
    cout << endl;
    cout << "CALCULO DE PERÍMETROS DE TRIANGULOS" << endl << endl;
    cout << "Menu de opciones:" << endl;
    cout << "1) Equilatero." << endl;
    cout << "2) Isosceles." << endl;
    cout << "3) Escaleno." << endl;
    cout << "Escoja su opcion: ";
    cin >> opcion;
    switch(opcion)
    {
        case 1:
        float lados;
        cout << "Digite la longitud de los tres lados: ";
        cin >> lados;
        perimetro = 3 * lados;
        cout << "El perimetro es: " << perimetro << endl;
        break;
        
        case 2:
        float dosLados, ladoDistinto;
        cout << "Digite la longitud de los dos lados iguales: ";
        cin >> dosLados;
        cout << "Digite la longitud del lado distinto: ";
        cin >> ladoDistinto;
        perimetro = 2 * dosLados + ladoDistinto;
        cout << "El perimetro es: " << perimetro << endl;
        break;
        
        case 3:
        float lado1, lado2, lado3;
        cout << "Digite la longitud del primer lado: ";cin >> lado1;
        cout << "Digite la longitud del segundo lado: ";
        cin >> lado2;
        cout << "Digite la longitud del tercer lado: ";
        cin >> lado3;
        perimetro = lado1 + lado2 + lado3;
        cout << "El perimetro es: " << perimetro << endl;
        break;
        
        default:
        cout << "Opcion no valida" << endl;
    }
        cout << endl;
}