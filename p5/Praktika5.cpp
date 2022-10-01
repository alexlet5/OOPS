//
// Created by Alex on 01.10.2022.
//

#include "Praktika5.h"
#include <iostream>
#include "../utils/ArrayUtils.h"

using namespace std;
static const int N = 5;
static const int M = 4;

void swapRows(int matrix[N][M], int index1, int index2) {
    int temp;
    for (int i = 0; i < M; i++) {
        temp = matrix[index1][i];
        matrix[index1][i] = matrix[index2][i];
        matrix[index2][i] = temp;
    }
}

void sortMatrix(int matrix[N][M]) {

    int summs[N];
    for (int i = 0; i < N; i++) {
        summs[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            summs[i] += matrix[i][j];
        }
    }
    cout << "Summs: " << endl;
    ArrayUtils::printArrayVertical(summs, N);

    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j++) {
            cout << "j = " << j << " \t";
            if (summs[j] <= summs[j - 1]) {
                cout << "swapping " << j << " and " << j - 1 << endl;
                swapRows(matrix, j, j - 1);
            }
        }
        cout << "i = " << i << endl;
        int summs[N];
        for (int k = 0; k < N; k++) {
            summs[k] = 0;
        }

        for (int k = 0; k < N; k++) {
            for (int j = 0; j < M; j++) {
                summs[k] += matrix[k][j];
            }
        }
        ArrayUtils::printArrayVertical(summs, N);
    }

    for (int j = M; j > 0; j--) {
        cout << "j = " << j << " \t";
        if (summs[j-1] <= summs[j + 1]) {
            cout << "swapping!!! " << j << " and " << j - 1 << endl;
            swapRows(matrix, j, j - 1);
        }
    }

}

//7.Дана матрица А(n,m).
// Упорядочить строки матрицы по возрастанию
// среднего арифметического значения находящихся в них элементов.
void Praktika5::run() {

    int matrix[N][M] = {
            {1,  0, 3,  7},
            {4,  3, 9,  3},
            {-2, 5, 12, 1},
            {5,  5, 7,  1},
            {-2, 5, 42, 1}
    };

    for (int i = 0; i < N; i++) {
        ArrayUtils::printArrayHorizontal(matrix[i], M);
    }

    cout << "Sorting..." << endl;
    sortMatrix(matrix);

    for (int i = 0; i < N; i++) {
        ArrayUtils::printArrayHorizontal(matrix[i], M);
    }

    int summs[N];
    for (int i = 0; i < N; i++) {
        summs[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            summs[i] += matrix[i][j];
        }
    }
    cout << "Summs: " << endl;
    ArrayUtils::printArrayVertical(summs, N);

}

