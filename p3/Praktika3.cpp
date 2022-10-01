//
// Created by Alex on 01.10.2022.
//

#include <iostream>
#include "Praktika3.h"
#include "../utils/ArrayUtils.h"

using namespace std;


//7.  Дан  одномерный  массив  размерности n,  отсортированный  по убыванию.
// Найти место в массиве, на котором следует расположить элемент m,
// чтобы  не  нарушить  убывающую  последовательность  чисел.
// Значение элемента mвводится с клавиатуры.
void Praktika3::run() {

    int arraySize, array[30], m;

    cout << "Vvedite m: ";
    cin >> m;

    cout << "Vvedite kolichestvo elementov massiva: ";
    cin >> arraySize;

    ArrayUtils::fillArray(array, arraySize);

    ArrayUtils::printArray(array, arraySize);

    cout << "Sorting..." << endl;
    sort(array, array + arraySize, greater<>());
    ArrayUtils::printArray(array, arraySize);

    int i = 0;
    while (m < array[i]) {
        i++;
    }
    cout << "Esli bi vstavili chislo, ego index bil bi: " << i;
}
