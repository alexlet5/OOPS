//
// Created by Alex on 02.10.2022.
//

#include "Praktika9.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"

using namespace std;


//7.Удвоить каждое слово во введённом предложении.
void Praktika9::run() {


    ofstream fout("C:\\data.dat");
    int count = 0;

    for (int i = 10; i <= 100; i++) {

    }
    fout.flush();
    fout.close();


    ifstream fin("C:\\data.dat");
    if (!fin) {
        cout << "error!\n";
        return;
    }

    double read;
    double array[10];
    int counter = 0;
    int size = 0;
    while (!fin.eof()) {

    }

}
