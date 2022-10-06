//
// Created by Alex on 02.10.2022.
//

#include "Praktika16.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include "../utils/ArrayUtils.h"

using namespace std;

class Spisok_ {
public:
    string surname;
    string initials;
    string gender;
    string city;
    string diagnosis;
    int age;
    string firma;
    int homeNumber;

    Spisok_(string surname,
           string initials,
           string gender,
           string city,
           int age
    ) : surname(std::move(surname)),
        initials(std::move(initials)),
        gender(std::move(gender)),
        city(std::move(city)),
        age(age),
        firma("VTB-24"),
        homeNumber(16)
        {};

    ~Spisok_() {
        homeNumber = 0;
        firma.clear();
    }

    void print() {
        cout << "FIO: " << surname << endl
        << "HOME NUMBER: " << homeNumber << endl
        << "FIRMA: " << firma << endl
        ;
    }
};


void Praktika16::run() {
    auto* spisok = new Spisok_("First", "F. F.", "Male", "Voronezh", 33);

    spisok->print();
    spisok->~Spisok_();
    spisok->print();
}
