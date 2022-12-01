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
    string age;
    string wardNum;
    string department;

    vector<string> days = {};
    vector<string> temperatures = {};
    int daysUnderCare = 0;

    Patient(string surname,
            string initials,
            string gender,
            string city,
            string diagnosis,
            string age,
            string wardNum,
            string department
    ) : surname(std::move(surname)),
        initials(std::move(initials)),
        gender(std::move(gender)),
        city(std::move(city)),
        diagnosis(std::move(diagnosis)),
        age(age),
        wardNum(wardNum),
        department(std::move(department)) {}

    Patient();

    void print() {
        cout << surname << " " << initials << " " << gender << endl;
    }

};

Patient::Patient() {

}

void Praktika13::run() {

    list<Patient> patients = {
            Patient("First", "F. F.", "Male", "Voronezh", "Diabetes", "23", "3", "Primary"),
            Patient("Finik", "R. R.", "Male", "Voronezh", "Diabetes", "23", "3", "Primary"),
            Patient("Second", "S. S.", "Male", "Krasnodar", "Tuberculosis", "21", "3", "Secondary")
    };

    cout
            << "0 - выход" << endl
            << "1 - узнать размер" << endl
            << "2 - печать" << endl
            << "3 - ввести нового" << endl
            << "4 - поиск" << endl;

    bool start = true;
    while (start) {
        cout << endl;
        int input;
        cin >> input;
        switch (input) {
            case 0: {
                start = false;
                break;
            }
            case 1: {
                cout << patients.size();
                break;
            }
            case 2: {
                for (auto &iter: patients) {
                    iter.print();
                }
                break;
            }
            case 3: {
                auto patient = Patient();
                cout << "Введите фамилию: ";
                cin >> patient.surname;
                cout << endl;
                cout << "Введите Инициалы: ";
                cin >> patient.initials;
                cout << endl;
                cout << "Введите Пол: ";
                cin >> patient.gender;
                cout << endl;
                cout << "Введите город: ";
                cin >> patient.city;
                cout << endl;
                cout << "Введите диагноз: ";
                cin >> patient.diagnosis;
                cout << endl;
                cout << "Введите возраст: ";
                cin >> patient.age;
                cout << endl;
                cout << "Введите палату: ";
                cin >> patient.wardNum;
                cout << endl;
                cout << "Введите отделение: ";
                cin >> patient.department;
                cout << endl;

                patients.push_back(patient);
                break;
            }
            case 4: {
                cout << "Введите начало фамилии: ";
                string elem;
                cin >> elem;

                auto predicateStartsWith = [&elem](Patient &value) {
                    if (value.surname.starts_with(elem))
                        return true;
                    else return false;
                };

                list<Patient> filtered;
                std::copy_if(patients.begin(), patients.end(), std::back_inserter(filtered), predicateStartsWith);

                for (auto &iter: filtered) {
                    iter.print();
                }
                break;
            }
            default: {
                cout
                        << "0 - выход" << endl
                        << "1 - узнать размер" << endl
                        << "2 - печать" << endl
                        << "3 - ввести нового" << endl
                        << "4 - поиск" << endl;
            }
        }
    }
}
