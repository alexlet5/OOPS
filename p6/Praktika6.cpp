//
// Created by Alex on 01.10.2022.
//

#include "Praktika6.h"
#include <iostream>
#include "../utils/ArrayUtils.h"

using namespace std;
static const int N = 5;
static const int M = 4;
int matrix[N][M] = {
        {1,  0,   3,  7},
        {4,  3,   9,  3},
        {-2, 5,   12, 1},
        {5,  -50, 7,  1},
        {-2, 5,   42, 1}
};


//7.Дана матрица А(n,m). Найти минимальное из чисел встречающееся более одного раза.
void task1() {
    cout << endl << "TASK 1" << endl;

    int encounteredOnce[N * M], encounteredOnceCount = 0;
    int encounteredMoreThanOnce[N * M], encounteredMoreThanOnceCount = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            auto iteratingMatrixElement = matrix[i][j];
            bool alreadyEncountered = false;

            for (int k = 0; k < encounteredOnceCount; k++) {
                if (encounteredOnce[k] == iteratingMatrixElement) {
                    alreadyEncountered = true;
                    break;
                }
            }

            if (alreadyEncountered) {
                encounteredMoreThanOnce[encounteredMoreThanOnceCount++] = iteratingMatrixElement;
            } else {
                encounteredOnce[encounteredOnceCount++] = matrix[i][j];
            }
        }
    }

    cout << "Encountered more than once: " << endl;
    ArrayUtils::printArrayHorizontal(encounteredMoreThanOnce, encounteredMoreThanOnceCount);

    int min = INT_MAX;
    for (int i = 0; i < encounteredMoreThanOnceCount; i++) {
        if (min > encounteredMoreThanOnce[i])
            min = encounteredMoreThanOnce[i];
    }

    cout << "Minimal element encountered more than once = " << min << endl;
}

//7.Дана матрица А(m,m). Вычислить сумму элементов, лежащих выше и ниже главной диагонали матрицы, и ответить какая сумма больше.
void task2() {
    int SIZE;

    if(M < N) SIZE = M;
    else SIZE = N;

    cout << endl << "TASK 2" << endl;
    int low = 0, high = 0;

    for (int i = 0; i < SIZE; i++) {
        ArrayUtils::printArrayHorizontal(matrix[i], SIZE);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i > j) {
                low += matrix[i][j];
            } else if (i < j) {
                high += matrix[i][j];
            } else {
                //diagonal element
            }
        }
    }

    cout << "Lower summ = " << low << endl;
    cout << "Higher summ = " << high << endl;


    if (low > high) cout << "Lower is more than higher" << endl;
    else cout << "Higer is more than lower" << endl;
}

void Praktika6::run() {
    task1();
    task2();
}
