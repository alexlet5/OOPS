//
// Created by Alex on 02.10.2022.
//

#include "Praktika10.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <list>
#include "../utils/ArrayUtils.h"

using namespace std;
const auto HIGH_INCLUDING = 50;
const auto LOW_INCLUDING = 20;

const auto predicateRange = [](int &value) {
    if (value > HIGH_INCLUDING || value < LOW_INCLUDING)
        return false;
    else return true;
};

//Используя  динамическую  структуру  список,
// подсчитать количество  элементов  лежащих  в  диапазоне
// от  20  до  50. Записать их в отдельный динамический массив.
// Полученный массив вывести на экран.
void Praktika10::run() {
    list<int> list1 = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75};
    list<int> list2;
    cout << "List size not in range: " << list1.size() << endl;

    std::copy_if(list1.begin(),
                 list1.end(),
                 std::back_inserter(list2),
                 predicateRange
    );

    cout << "List size in range: " << list2.size() << endl;
}
