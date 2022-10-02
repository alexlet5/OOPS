//
// Created by Alex on 01.10.2022.
//

#ifndef OOPS_ARRAYUTILS_H
#define OOPS_ARRAYUTILS_H

class ArrayUtils {

public:
    static void printArrayHorizontal(int array[], int size);
    static void printArrayVertical(int *array, int size);
    static void printArrayHorizontal(double array[], int size);
    static void printArrayVertical(double *array, int size);
    static void fillArray(int *array, int size);
};


#endif //OOPS_ARRAYUTILS_H
