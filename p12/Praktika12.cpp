//
// Created by Alex on 02.10.2022.
//

#include "Praktika12.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"
#include "../utils/Queue.h"

using namespace std;

//реализация Queue импортируется
void Praktika12::run() {
    auto queue = Queue();

    cout
            << "0 - выход" << endl
            << "1 - узнать размер" << endl
            << "2 - удалить первый" << endl
            << "3 - узнать первый" << endl
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
                cout << queue.size();
                break;
            }
            case 2: {
                cout << queue.pop();
                break;
            }
            case 3: {
                cout << queue.front();
                break;
            }
            case 4: {
                cout << "Введите элемент: ";
                int elem;
                cin >> elem;
                queue.push(elem);
                break;
            }
            case 5: {
                queue.clear();
                break;
            }
            default: {
                cout
                        << "0 - выход" << endl
                        << "1 - узнать размер" << endl
                        << "2 - удалить первый" << endl
                        << "3 - узнать первый" << endl
                        << "4 - ввести новый элемент" << endl
                        << "5 - очистить" << endl;
            }
        }
    }
}
