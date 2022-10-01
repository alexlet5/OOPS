//
// Created by Alex on 01.10.2022.
//

#include "Praktika4.h"
#include <iostream>
#include "../utils/ArrayUtils.h"

using namespace std;

static const int N = 3;
static const int M = 4;

// Дана матрица А(n,m).
// Сформировать массив В(n),
// каждый элемент которого  есть количество положительных
// элементов соответствующей строки матрицы А.
void Praktika4::run() {

    int matrix[N][M] = {
            {1,  0, 3,  7},
            {4,  3, 9,  3},
            {-2, 5, 12, 1}
    };

    int array[M] = {0, 0, 0, 0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matrix[i][j] >= 0) array[j]++;
        }
    }

    ArrayUtils::printArray(array, M);
}
