//
// Created by Alex on 01.10.2022.
//

#include <iostream>
#include "Praktika1.h"
#include "../utils/ArrayUtils.h"

using namespace std;

//Перенести в начало одномерного массива второй нулевой элемент.
void Praktika1::run() {

    int arraySize, array[30], secondZeroIndex = 0;
    bool isFirstZeroFound = false;

    cout << "Vvedite kolichestvo elementov massiva: ";
    cin >> arraySize;

    ArrayUtils::fillArray(array, arraySize);
    ArrayUtils::printArray(array, arraySize);

    for (int i = 0; i < arraySize; i++) {
        if (array[i] == 0 && !isFirstZeroFound) {
            isFirstZeroFound = true;
            cout << "First elem found: " << i << endl;
            continue;
        };
        if (array[i] == 0 && isFirstZeroFound) {
            secondZeroIndex = i;
            cout << "Second elem found: " << i << endl;
            break;
        }
    }

    if (secondZeroIndex == 0) {
        cout << "Second zero not found";
        return;
    }

    int arrayAfter[30];
    for (int i = 0; i < arraySize; i++) {
        if (i == secondZeroIndex) {
            arrayAfter[0] = array[i];
        } else if(i < secondZeroIndex) {
            arrayAfter[i+1] = array[i];
        } else if(i > secondZeroIndex) {
            arrayAfter[i] = array[i];
        }
    }

    ArrayUtils::printArray(arrayAfter, arraySize);
}
