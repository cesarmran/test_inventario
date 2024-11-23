//
// Created by cmora on 22/11/2024.
//

#include "History.h"
#include <iostream>
void History::addRecord(const string &record) {
    records.push_back(record);
}

void History::showHistory() {
    cout << "historial de operaciones: ";
    for(auto& record : records) {
        cout << record << endl;
    }
}
