//
// Created by cmora on 22/11/2024.
//

#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
using namespace std;


class inventory {
private:
    unordered_map<string, int> products;
public:
    void addProduct(string& name, int quantity);
    int getProduct(string& name);
    bool removeProduct(string& name);

};



#endif //INVENTORY_H
