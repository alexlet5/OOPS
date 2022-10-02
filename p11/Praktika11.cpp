//
// Created by Alex on 02.10.2022.
//

#include "Praktika11.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"
#include "../utils/Stack.h"

using namespace std;

//реализация Stack импортируется
void Praktika11::run() {
    auto stack = Stack();
    cout << "size: " << stack.size() << endl;

    for(int i = 1; i < 5; i++){
        cout << "inserting: " << i << endl;
        stack.push(i);
    }
    cout << "size: " << stack.size() << endl;
    cout << "back: " << stack.back() << endl;

    cout << "pop: " << stack.pop() << endl;
    cout << "back: " << stack.back() << endl;
    cout << "size: " << stack.size() << endl;

    cout << "clearing..." << endl;
    stack.clear();

    cout << "size: " << stack.size() << endl;
    cout << "pop: " << stack.pop() << endl;
    cout << "back: " << stack.back() << endl;

}
