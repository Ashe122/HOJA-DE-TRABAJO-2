// Angelyn Diaz

#include <iostream> //Esta es un biblioteca que sirve para entrada y salida de datos

using namespace std; 

int main() {
    // Aquí se declara una variable
    int numero;

    // Se le solicita al usuario que ingrese un número
    cout << "****Bienvenida personita****.\n";
    cout << "Ingresa un numero: ";
    cin >> numero;

    // Aquí se comprueba si el número ingresado es par o impar
    if (numero % 2 == 0) {
        cout << "Correcto " << numero << " es un numero par.\n" << endl;
    } else {
        cout << "Incorrecto " << numero << " no es un numero par.\n" << endl;
    }

    return 0;
}
