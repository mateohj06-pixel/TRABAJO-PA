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
        case 2: {
            float total = 0;
            for(int i = 0; i < n; i++) {
                total += productos[i].precio * productos[i].cantidad;
            }
            case 3:
            cout << "\n--- Productos registrados ---\n";
            for(int i = 0; i < n; i++) {
                cout << "Producto " << i+1 << endl;
                cout << "Nombre: " << productos[i].nombre << endl;
                cout << "Precio: " << productos[i].precio << endl;
                cout << "Cantidad: " << productos[i].cantidad << endl;
                cout << "Subtotal: " << productos[i].precio * productos[i].cantidad << endl;
                cout << "----------------------\n";
            }
            break;
            cout << "Total de la compra: $" << total << endl;
            break;
        }
