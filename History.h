//
// Created by cmora on 22/11/2024.
//

#ifndef HISTORY_H
#define HISTORY_H
#include <iostream>
#include <list>
using namespace std;


class History {
private:
    list<string> records;
public:
    void addRecord(const string& record);
    void showHistory();
};



#endif //HISTORY_H
