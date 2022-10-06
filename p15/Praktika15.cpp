//
// Created by Alex on 02.10.2022.
//

#include "Praktika15.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"
#include <list>
#include "Vagon.h"

using namespace std;

//Вариант 1, 7. Разработать программу с использованием наследования классов,
// реализующую классы:
// железнодорожный вагон;
// вагон для перевозки автомобилей;
// цистерна.
// Используя виртуальные функции, не зная с объектом какого класса вы работаете,
// выведите на экран его вес, количество единиц товара в вагоне, с указанием размерности (шт. или литров),
// рассчитайте стоимость перевозки товара,
// с учетом поправочных коэффициентов(для автомобиля k=1,1, для ГСМ k=1,4).
void Praktika15::run() {

    AutomobileVagon v1 = AutomobileVagon(1,2);
    Cisterna v2 = Cisterna(1,2);

    list<Vagon*> train = {
            &v1, &v2
    };

    for (auto vagon : train){
        vagon->print();
    }
}
