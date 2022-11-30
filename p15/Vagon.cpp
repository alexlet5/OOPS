//
// Created by Alex on 02.10.2022.
//

#include "Vagon.h"
#include <iostream>

using namespace std;

void AutomobileVagon::print() {
    cout << "Automobile vagon" << endl
         << "Weight: " << _weight << endl
         << "Count: " << _count << endl
         << "Price: " << price() << endl
         << endl;
}

void Cisterna::print() {

    cout << "Cisterna" << endl
         << "Weight: " << _weight << endl
         << "Count: " << _count << endl
         << "Price: " << price() << endl
         << endl;
}

