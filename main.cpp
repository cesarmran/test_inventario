#include <iostream>
#include "inventory.h"
using namespace std;
int main() {
    inventory Inventory;
    string name = "audifonos";

    Inventory.addProduct(name, 3);
    Inventory.getProduct(name);

    return 0;
}
