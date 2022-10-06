//
// Created by Alex on 02.10.2022.
//

#include "Praktika18.h"
#include <iostream>
#include <cmath>
#include "Circle.h"
#include "../utils/TemplateCollection.h"

using namespace std;

class Bus {
public:
    int id;
    string driver;
    int num;
    Bus() : id(0), driver(""),num(0) {}
    Bus(int id, const string &driver, int num) : id(id), driver(driver), num(num) {}
};

void Praktika18::run() {

    auto *circle = new Circle(10.0);
    cout << circle->calculateS();


    cout << endl << "--------------------------------------------------------" << endl;

    TemplateCollection<Bus> notArrivedList = TemplateCollection<Bus>();
    TemplateCollection<Bus> arrivedList = TemplateCollection<Bus>();

    auto bus1 = Bus(1, "Petrov", 1);
    notArrivedList.add(bus1, bus1.id);

    auto bus2 = Bus(2, "Ivanov", 56);
    notArrivedList.add(bus2, bus2.id);

    cout << endl << "--------------------------------------------------------" << endl;

    cout << notArrivedList.size() << " Buses left" << endl;

    Bus arrivedBus;

    arrivedBus = notArrivedList.popById(bus1.id);
    cout << "Driver arrived: " << arrivedBus.driver << endl;
    arrivedList.add(arrivedBus, arrivedBus.id);
    cout << arrivedList.size() << " Buses arriver" << endl;
    cout << notArrivedList.size() << " Buses left" << endl;

    arrivedBus = notArrivedList.popById(bus2.id);
    cout << "Driver arrived: " << arrivedBus.driver << endl;
    arrivedList.add(arrivedBus, arrivedBus.id);
    cout << arrivedList.size() << " Buses arriver" << endl;
    cout << notArrivedList.size() << " Buses left" << endl;

}
