#include <iostream>
using namespace std;
int main() {

    int N1;

    cout << "Bienvenido al programa para calcular si el numero es positivo, negativo o cero" << endl;
    cout << "Por favor, ingrese un numero: ";
    cin >> N1;


    if (N1 > 0) {
        cout << "El numero que usted a ingresado es positivo." << endl;
    } else if (N1 < 0) {
        cout << "El número que usted a ingresado es negativo." << endl;
    } else {
        cout << "El número que usted a ingresado es cero." << endl;
    }
    cout << "Pase feliz dia." <<endl;
    return 0;
}
