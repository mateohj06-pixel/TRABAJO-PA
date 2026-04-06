#include <iostream>
using namespace std;
const int MAX = 100;

struct Producto {
    string nombre;
    float precio;
    int cantidad;
};

int main() {
    return 0;
}
int opcion;

do {
    cout << "\n--- MENU ---\n";
    cout << "1. Registrar producto\n";
    cout << "2. Calcular total de compra\n";
    cout << "3. Mostrar productos registrados\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

} while(opcion != 4);