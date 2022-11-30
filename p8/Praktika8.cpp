//
// Created by Alex on 02.10.2022.
//

#include "Praktika8.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"

using namespace std;

double f(double x) {
    if (((x * x - 5 * x + 4) / x) <= 0) return 0;
    else return log(((x * x) - (5 * x) + 4) / x) + 2 * x;
}

//f(x) = ln( (x^2-5x+4)/x ) + 2x
void Praktika8::run() {

    string home = getenv("HOME");
    cout << home;
    ofstream fout(home + "/" + "file.dat");
    int count = 0;

    for (int i = 10; i <= 100; i++) {
        const auto j = (double) i / 10;
        auto result = f(j);
        //cout << j << "\t = " << result << " is number: " << boolalpha << (result != result) << endl;

        fout << result << " ";
        count++;
    }
    fout.flush();
    fout.close();


    ifstream fin(home + "/" + "file.dat");
    if (!fin) {
        cout << "error!\n";
        return;
    }

    double read;
    double array[10];
    int counter = 0;
    int size = 0;
    while (!fin.eof()) {
        fin >> read;

        if ((counter % 10) == 0) {
            double delta = ((double) counter / 10) + 1;
            double calculated = f(delta);

            cout << "delta " << delta << " read: " << read
                 << "; calculated: " << calculated
                 << " is equal ? " << boolalpha << (read == calculated) << endl;

            array[size++] = read;
        }

        counter++;
    }
    cout << endl << endl;

    ArrayUtils::printArrayHorizontal(array, size);
}
