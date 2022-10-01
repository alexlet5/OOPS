//
// Created by Alex on 01.10.2022.
//

#include <iostream>
#include "Praktika2.h"
#include "../utils/ArrayUtils.h"

using namespace std;

void insertSort(int *a, int n) {
    int tmp;
    for (int i = 1, j; i < n; ++i) {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j)
            a[j + 1] = a[j];
        a[j + 1] = tmp;
    }
}

void Praktika2::run() {

    int arraySize, array[30], secondZeroIndex = 0;
    bool isFirstZeroFound = false;

    cout << "Vvedite kolichestvo elementov massiva: ";
    cin >> arraySize;

    ArrayUtils::fillArray(array, arraySize);
    ArrayUtils::printArray(array, arraySize);

    insertSort(array, arraySize);

    ArrayUtils::printArray(array, arraySize);

}
