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

    cout
            << "0 - выход" << endl
            << "1 - узнать размер" << endl
            << "2 - удалить последний" << endl
            << "3 - узнать последний" << endl
            << "4 - ввести новый элемент" << endl
            << "5 - очистить" << endl;

    bool start = true;
    while (start) {
        cout << endl;
        int input;
        cin >> input;
        switch (input) {
            case 0: {
                start = false;
                break;
            }
            case 1: {
                cout << stack.size();
                break;
            }
            case 2: {
                cout << stack.pop();
                break;
            }
            case 3: {
                cout << stack.back();
                break;
            }
            case 4: {
                cout << "Введите элемент: ";
                int elem;
                cin >> elem;
                stack.push(elem);
                break;
            }
            case 5: {
                stack.clear();
                break;
            }
            default: {
                cout
                        << "0 - выход" << endl
                        << "1 - узнать размер" << endl
                        << "2 - достать последний" << endl
                        << "3 - ввести новый элемент" << endl
                        << "4 - очистить" << endl;
            }
        }
    }
}
