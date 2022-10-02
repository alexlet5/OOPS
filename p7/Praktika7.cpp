//
// Created by Alex on 02.10.2022.
//

#include "Praktika7.h"
#include <iostream>
#include <fstream>
#include "../utils/ArrayUtils.h"

using namespace std;

//7.Перенести  в  начало  одномерного  массива  второй  нулевой элемент.
void Praktika7::run() {
    int arraySize = 0, array[50];
    ifstream fin;

    fin.open("C:\\in_massiv.txt");
    if (!fin) {
        cout << "error!\n";
        return;
    }

    while (!fin.eof()) {
        fin >> array[arraySize++];
    }
    cout << "\nN=" << arraySize << endl;
    ArrayUtils::printArrayHorizontal(array, arraySize);

    fin.clear();
    fin.close();


    int secondZeroIndex = 0;
    bool isFirstZeroFound = false;


    for (int i = 0; i < arraySize; i++) {
        if (array[i] == 0 && !isFirstZeroFound) {
            isFirstZeroFound = true;
            cout << "First elem found: [" << i << "]" << endl;
            continue;
        }
        if (array[i] == 0 && isFirstZeroFound) {
            secondZeroIndex = i;
            cout << "Second elem found: [" << i << "]" << endl;
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
        } else if (i < secondZeroIndex) {
            arrayAfter[i + 1] = array[i];
        } else if (i > secondZeroIndex) {
            arrayAfter[i] = array[i];
        }
    }
    ArrayUtils::printArrayHorizontal(arrayAfter, arraySize);

    ofstream fout;
    fout.open("C:\\out_massiv.txt");
    for (int i = 0; i < arraySize; i++){
        fout << arrayAfter[i] << " ";
    }
}
