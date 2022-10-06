//
// Created by Alex on 02.10.2022.
//

#include "Praktika17.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"

using namespace std;

class InfiniteNumberException : public runtime_error {
public:
    explicit InfiniteNumberException() : runtime_error("Result is infinity!") {};
};

class NotANumberException : public runtime_error {
public:
    explicit NotANumberException() : runtime_error("Result is not a natural number!") {};
};

auto fun(double x) {

    auto result = log(((x * x) - (5 * x) + 4) / x) + 2 * x;

    if (isinf(result)) throw InfiniteNumberException();

    if (result != result) throw NotANumberException();

    return result;
}

void Praktika17::run() {

    double x;
    cout << "Vvedite x:  ";
    cin >> x;


    double result;
    try{
        result = fun(x);
        cout << "Result = " << result << endl;
    } catch (runtime_error &e){
        cout << "Error: " << e.what();
    }
}
