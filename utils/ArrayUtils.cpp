//
// Created by Alex on 01.10.2022.
//

#include <iostream>
#include "ArrayUtils.h"

using namespace std;

void ArrayUtils::printArray(int array[], int size) {

    for (int i = 0; i < size; i++) {
        cout << array[i] << " \t";
    }

    cout << endl;
}

void ArrayUtils::fillArray(int array[], int size) {

    for (int i = 0; i < size; i++) {
        cout << "Vvedite M[" << i << "]="; //Vvod elementov odnomernogo
        cin >> array[i]; // massiva    }
    }

    cout << endl;
}
