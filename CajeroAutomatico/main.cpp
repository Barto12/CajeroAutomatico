#include <iostream>

using namespace std;

// Función para mostrar el menú
void mostrarMenu() {
    cout << "Cajero Automático\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Retirar dinero\n";
    cout << "3. Depositar dinero\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
}

// Función principal
int main() {
    int opcion;
    float saldo = 1000.0;  // Saldo inicial

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2: {
                float retiro;
                cout << "Ingrese la cantidad a retirar: ";
                cin >> retiro;
                if (retiro > saldo) {
                    cout << "Saldo insuficiente." << endl;
                } else {
                    saldo -= retiro;
                    cout << "Ha retirado: $" << retiro << endl;
                    cout << "Su saldo actual es: $" << saldo << endl;
                }
                break;
            }
            case 3: {
                float deposito;
                cout << "Ingrese la cantidad a depositar: ";
                cin >> deposito;
                saldo += deposito;
                cout << "Ha depositado: $" << deposito << endl;
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            }
            case 4:
                cout << "Gracias por usar el cajero automático." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}

