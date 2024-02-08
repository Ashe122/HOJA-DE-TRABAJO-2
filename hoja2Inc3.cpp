// Angelyn Diaz

#include <iostream>
using namespace std;

int main() {
    // Mensaje de bienvenida
    cout << "<<<<<Bienvenida Personita>>>>>>" << endl;

    // Declaración de variables
    int numero1, numero2;

    // Solicita al usuario que ingrese el primer número
    cout << "Ingresa el primer número: ";
    cin >> numero1;

    // Solicita al usuario que ingrese el segundo número
    cout << "Ingresa el segundo número: ";
    cin >> numero2;

    // Determina si los dos números son iguales
    if (numero1 == numero2) {
        // Muestra un mensaje si los números son iguales
        cout << "Muy bien, los números " << numero1 << " y " << numero2 << " son iguales." << endl;
    } else {
        // Muestra un mensaje si los números no son iguales
        cout << "Los números " << numero1 << " y " << numero2 << " no son iguales." << endl;
    }

    return 0; // Indica que el programa se ejecutó correctamente
}
// Aquí finaliza el programa
