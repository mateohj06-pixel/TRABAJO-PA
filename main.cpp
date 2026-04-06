#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

struct Producto {
    string nombre;
    float precio;
    int cantidad;
};

int main() {
    Producto productos[MAX];
    int n = 0;
    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Registrar producto\n";
        cout << "2. Calcular total de compra\n";
        cout << "3. Mostrar productos registrados\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

        case 1:
            if(n < MAX) {
                cout << "Nombre del producto: ";
                cin >> productos[n].nombre;

                cout << "Precio: ";
                cin >> productos[n].precio;

                cout << "Cantidad: ";
                cin >> productos[n].cantidad;

                n++;
                cout << "Producto registrado.\n";
            } else {
                cout << "No se pueden registrar mas productos.\n";
            }
            break;
