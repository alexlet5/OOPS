//
// Created by Alex on 02.10.2022.
//

#include "Vagon.h"
#include <iostream>
using namespace std;

AutomobileVagon::AutomobileVagon(int weight, int count) : _weight(weight), _count(count) {}

double AutomobileVagon::getK() {
    return 1.1;
}

void AutomobileVagon::print() {
    cout << "Automobile vagon" << endl
         << "Weight: " << _weight << endl
         << "Count: " << _count << endl
         << "Price: " << price() << endl
         << endl;
}

double AutomobileVagon::price() {
    return getK() * _weight * _count;
}


Cisterna::Cisterna(int weight, int count) : _weight(weight), _count(count) {}

double Cisterna::getK() {
    return 1.4;
}

void Cisterna::print() {

    cout << "Cisterna" << endl
    << "Weight: " << _weight << endl
    << "Count: " << _count << endl
    << "Price: " << price() << endl
    << endl;
}

double Cisterna::price() {
    return getK() * _weight * _count;
}

