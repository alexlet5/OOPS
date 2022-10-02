//
// Created by Alex on 02.10.2022.
//

#include "Praktika14.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <list>
#include "../utils/ArrayUtils.h"

using namespace std;

class Spisok {
public:
    string surname;
    string initials;
    string gender;
    string city;
    string diagnosis;
    int age;

    Spisok(string surname,
           string initials,
           string gender,
           string city,
           string diagnosis,
           int age
    ) : surname(std::move(surname)),
        initials(std::move(initials)),
        gender(std::move(gender)),
        city(std::move(city)),
        diagnosis(std::move(diagnosis)),
        age(age) {}

    void print() {
        cout << surname << " " << initials << " " << gender << endl;
    }
};

//Вывести на экран сотрудников (фамилии и год рождения),
// старше  Nлет. N–вводится с клавиатуры.
// Структура класса с именем SPISOK:
// Фамилияи инициалы;
// Номер телефона;
// Должность;
// Год рождения.

void Praktika14::run() {
    list<Spisok> patients = {
            Spisok("First", "F. F.", "Male", "Voronezh", "Diabetes", 33),
            Spisok("Finik", "R. R.", "Male", "Voronezh", "Diabetes", 23),
            Spisok("Second", "S. S.", "Male", "Krasnodar", "Tuberculosis", 21)
    };
    for (auto &iter: patients) {
        iter.print();
    }

    int ageMoreThan;
    cout << endl << "Input age filter: ";
    cin >> ageMoreThan;
    cout << endl;

    cout << endl << "Filtering..." << endl;
    list<Spisok> filtered;

    auto agePredicate = [&ageMoreThan](Spisok &value) {
        if (value.age > ageMoreThan)
            return true;
        else return false;
    };

    std::copy_if(patients.begin(),
                 patients.end(),
                 std::back_inserter(filtered),
                 agePredicate
    );

    for (auto &iter: filtered) {
        iter.print();
    }
}