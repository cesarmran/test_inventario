#include <iostream>
#include "History.h"
#include "inventory.h"
using namespace std;
int main() {
    inventory Inventory;
    History history;

    string name = "audifonos";
    int choice;

    do {
        cout << "inventario Nozama 2024" << endl;
        cout << "1. Agregar un producto" << endl;
        cout << "5. Salir del inventario" << endl;
        cin >> choice;
        string nombre;
        int cantidad;
        switch (choice) {
            case 1:
                cout << "Nombre del producto: " << endl;
                cin >> nombre;
                cout << "Cantidad" << endl;
                cin >> cantidad;
                Inventory.addProduct(nombre, cantidad);
                break;
            case 5:
                cout << "Saliendo del inventario..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }

    }while(choice != 5);
    Inventory.addProduct(name, 3);
    Inventory.getProduct(name);

    return 0;
}
