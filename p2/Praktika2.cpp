//
// Created by Alex on 01.10.2022.
//

#include <iostream>
#include "Praktika2.h"
#include "../utils/ArrayUtils.h"

using namespace std;

//7.  Отсортировать  элементы  одномерного  массива  по  возрастанию,
// начиная с 3-его и заканчивая 10-ым элементом массива.
void Praktika2::run() {

    int arraySize;

    //cout << "Vvedite kolichestvo elementov massiva: ";
    //cin >> arraySize;
    //ArrayUtils::fillArray(array, arraySize);

    arraySize = 15;
    int array[] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};


    ArrayUtils::printArrayHorizontal(array, arraySize);

    cout << endl;

    int sortFirstIndex = 2;
    int sortLastIndex;
    if (arraySize < 10) sortLastIndex = arraySize;
    else sortLastIndex = 10;
    std::sort(&array[sortFirstIndex], &array[sortLastIndex]);
    ArrayUtils::printArrayHorizontal(array, arraySize);
}
