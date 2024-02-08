#include <iostream>
using namespace std;

int main() {
    // Mensaje de bienvenida
    cout << "--------Bienvenida personita---------" << endl;

    // Declaración de variable para almacenar el año ingresado por el usuario
    int anio;

    // Solicita al usuario que ingrese un año para verificar si es bisiesto
    cout << "Ingresa un anio para verificar si es bisiesto: ";
    cin >> anio;

    // Verifica si el año es bisiesto 
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        // Mostrar mensaje si el año es bisiesto
        cout << anio << " es un anio bisiesto." << endl;
    } else {
        // Mostrar mensaje si el año no es bisiesto 
        cout << anio << " no es un anio bisiesto." << endl;
    }

    return 0;
}
