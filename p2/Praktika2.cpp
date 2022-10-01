//
// Created by Alex on 01.10.2022.
//

#include <iostream>
#include "Praktika2.h"
#include "../utils/ArrayUtils.h"

using namespace std;

void insertSort(int a[], int start, int end) {
    int tmp;
    for (int i = 1, j; i < end; ++i) {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j)
            a[j + 1] = a[j];
        a[j + 1] = tmp;
    }
}

//7.  Отсортировать  элементы  одномерного  массива  по  возрастанию,
// используя метод сортировки обменами,
// начиная с 3-его и заканчивая 10-ым элементом массива.
void Praktika2::run() {

    int arraySize, array[30];

    cout << "Vvedite kolichestvo elementov massiva: ";
    cin >> arraySize;

    ArrayUtils::fillArray(array, arraySize);
    ArrayUtils::printArrayHorizontal(array, arraySize);

    cout << "Sorting... ";

    int sortFirstIndex = 2;

    int sortLastIndex;
    if (arraySize < 10) sortLastIndex = arraySize;
    else sortLastIndex = 10;

    insertSort(array, sortFirstIndex, sortLastIndex);

    ArrayUtils::printArrayHorizontal(array, arraySize);
}
