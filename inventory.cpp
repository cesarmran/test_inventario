#include "inventory.h"

void inventory::addProduct(string &name, int quantity) {
    products[name] += quantity;
}

int inventory::getProduct(string &name) {
    auto id = products.find(name);
    if(id != products.end()) {
        return id->second;
    }
    return -1;
}

bool inventory::removeProduct(string &name) {
    return products.erase(name) > 0;
}
