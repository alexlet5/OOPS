//
// Created by Alex on 02.10.2022.
//

#include "Praktika13.h"
#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <algorithm>
#include "../utils/ArrayUtils.h"

using namespace std;

//Структура  записи  (класса):
// фамилия  и  инициалы  пациента,
// пол,  возраст,  место  проживания  (город), диагноз,
// массив дат и температур пациента,
// количество дней наблюдения за пациентом,
// возраст,  номер  палаты,  отделение.
class Patient {
public:
    string surname;
    string initials;
    string gender;
    string city;
    string diagnosis;
    int age;
    int wardNum;
    string department;

    vector<string> days = {};
    vector<string> temperatures = {};
    int daysUnderCare = 0;

    Patient(string surname,
            string initials,
            string gender,
            string city,
            string diagnosis,
            int age,
            int wardNum,
            string department
    ) : surname(std::move(surname)),
        initials(std::move(initials)),
        gender(std::move(gender)),
        city(std::move(city)),
        diagnosis(std::move(diagnosis)),
        age(age),
        wardNum(wardNum),
        department(std::move(department)) {}

    void print() {
        cout << surname << " " << initials << " " << gender << endl;
    }
};

string criteria = "Fi";
const auto predicateStartsWith = [](Patient &value) {
    if (value.surname.starts_with(criteria))
        return true;
    else return false;
};


void Praktika13::run() {

    list<Patient> patients = {
            Patient("First", "F. F.", "Male", "Voronezh", "Diabetes", 23, 3, "Primary"),
            Patient("Finik", "R. R.", "Male", "Voronezh", "Diabetes", 23, 3, "Primary"),
            Patient("Second", "S. S.", "Male", "Krasnodar", "Tuberculosis", 21, 3, "Secondary")
    };
    for (auto &iter: patients) {
        iter.print();
    }

    cout << endl << "Filtering..." << endl;
    list<Patient> filtered;
    std::copy_if(patients.begin(), patients.end(), std::back_inserter(filtered), predicateStartsWith);

    for (auto &iter: filtered) {
        iter.print();
    }
}
