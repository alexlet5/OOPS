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
    auto collection = Queue();
    cout << "size: " << collection.size() << endl;

    for(int i = 1; i < 5; i++){
        cout << "inserting: " << i << endl;
        collection.push(i);
    }
    cout << "size: " << collection.size() << endl;
    cout << "front: " << collection.front() << endl;

    cout << "pop: " << collection.pop() << endl;
    cout << "front: " << collection.front() << endl;
    cout << "size: " << collection.size() << endl;

    cout << "clearing..." << endl;
    collection.clear();

    cout << "size: " << collection.size() << endl;
    cout << "pop: " << collection.pop() << endl;
    cout << "front: " << collection.front() << endl;

    for(int i = 1; i < 3; i++){
        cout << "inserting: " << i << endl;
        collection.push(i);
    }
    cout << "size: " << collection.size() << endl;
    cout << "pop: " << collection.pop() << endl;
    cout << "size: " << collection.size() << endl;
    cout << "front: " << collection.front() << endl;
}
